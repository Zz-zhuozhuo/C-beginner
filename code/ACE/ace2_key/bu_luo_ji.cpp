#include <stdio.h>
#include <string.h>

#define MAX_TASKS 20    // 支持最多 20 个任务
#define TIME_SLICE 100  // 时间片长度 100ms

// ================== 任务状态 ==================
typedef enum {
    NEW = 0,    // 未到达
    READY = 1,  // 就绪
    RUNNING = 2,// 运行
    DONE = 3    // 完成
} TaskState;

// ================== 任务结构体 ==================
typedef struct {
    char name[10];          // 任务名
    int priority;           // 优先级（数值大优先）
    int arrival_time;       // 到达时间(ms)
    int total_time;         // 总执行时间(ms)
    int remaining_time;     // 剩余执行时间
    TaskState state;        // 当前状态
} Task;

Task tasks[MAX_TASKS];
int task_count = 0;
int current_time = 0;

// ================== 添加任务 ==================
void add_task(const char* name, int priority, int arrival_time, int total_time) {
    if (task_count >= MAX_TASKS) {
        printf("任务数已满，无法添加新任务！\n");
        return;
    }
    strcpy(tasks[task_count].name, name);
    tasks[task_count].priority = priority;
    tasks[task_count].arrival_time = arrival_time;
    tasks[task_count].total_time = total_time;
    tasks[task_count].remaining_time = total_time;
    tasks[task_count].state = NEW; // 初始状态：未到达
    task_count++;
}

// ================== 检查中途到达任务 ==================
void check_new_tasks() {
    for (int i = 0; i < task_count; i++) {
        if (tasks[i].state == NEW && tasks[i].arrival_time <= current_time) {
            tasks[i].state = READY;
            printf("时间 %dms: 任务 %s 到达，就绪\n", current_time, tasks[i].name);
        }
    }
}

// ================== 选择下一个任务 ==================
int select_next_task(int last_task_index) {
    int best_index = -1;
    for (int i = 0; i < task_count; i++) {
        if (tasks[i].state == READY) {
            if (best_index == -1) {
                best_index = i;
            } else {
                if (tasks[i].priority > tasks[best_index].priority) {
                    best_index = i;
                } else if (tasks[i].priority == tasks[best_index].priority) {
                    // 时间片轮转
                    if (i > last_task_index) {
                        best_index = i;
                    }
                }
            }
        }
    }
    return best_index;
}

// ================== 调度器主循环 ==================
void scheduler() {
    int last_task_index = -1;

    while (1) {
        // 1. 检查是否有新任务到达
        check_new_tasks();

        // 2. 选择下一个任务
        int idx = select_next_task(last_task_index);

        if (idx == -1) {
            // 没有就绪任务 -> CPU 空闲
            printf("时间 %dms: CPU 空闲\n", current_time);
            current_time += TIME_SLICE;
        } else {
            // 执行任务
            tasks[idx].state = RUNNING;
            printf("时间 %dms: 运行任务 %s (优先级 %d)\n", current_time, tasks[idx].name, tasks[idx].priority);

            // 执行时间片
            int exec_time = (tasks[idx].remaining_time >= TIME_SLICE) ? TIME_SLICE : tasks[idx].remaining_time;
            tasks[idx].remaining_time -= exec_time;
            current_time += exec_time;

            // 检查任务是否完成
            if (tasks[idx].remaining_time <= 0) {
                tasks[idx].state = DONE;
                printf("时间 %dms: 任务 %s 完成\n", current_time, tasks[idx].name);
            } else {
                tasks[idx].state = READY; // 回到就绪队列
            }

            last_task_index = idx;
        }

        // 3. 判断是否所有任务完成
        int all_done = 1;
        for (int i = 0; i < task_count; i++) {
            if (tasks[i].state != DONE) {
                all_done = 0;
                break;
            }
        }
        if (all_done) {
            printf("所有任务完成，调度器退出。\n");
            break;
        }
    }
}

// ================== 主函数 ==================
int main() {
    // 初始任务
    add_task("T1", 2, 0, 250);
    add_task("T2", 1, 50, 170);
    add_task("T3", 3, 200, 100); 

    scheduler(); // 启动调度器
    return 0;
}
