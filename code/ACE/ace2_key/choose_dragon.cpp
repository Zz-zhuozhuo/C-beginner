#include <stdio.h>
#include <string.h>

typedef struct {
    char id[11];    // 队员ID
    int team_age;   // 队龄
    int order;      // 登记顺序
} Member;

// 比较两个队员的优先级
// 返回1表示a应该在b前面，0表示b应该在a前面
int should_a_come_first(Member a, Member b) {
    // 规则1: 老登优先
    if (a.team_age >= 2 && b.team_age < 2) {
        return 1;
    }
    if (a.team_age < 2 && b.team_age >= 2) {
        return 0;
    }
    
// 规则2: 老登按队龄降序，相同则按登记顺序升序
if (a.team_age >= 2 && b.team_age >= 2) {
    if (a.team_age > b.team_age) {
        return 1;
    } else if (a.team_age < b.team_age) {
        return 0;
    } else {
        return a.order < b.order;
    }
}

// 规则3: 小登按登记顺序升序
return a.order < b.order;
}
// 插入排序实现
void custom_sort(Member arr[], int n) {
    for (int i = 1; i < n; i++) {
        Member key = arr[i];
        int j = i - 1;
        
    // 将比key优先级低的元素向后移动
    while (j >= 0 && !should_a_come_first(arr[j], key)) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}
}
int main() {
    int n;
    scanf("%d", &n);
    
Member members[100]; 

// 读取输入并记录登记顺序
for (int i = 0; i < n; i++) {
    scanf("%s %d", members[i].id, &members[i].team_age);
    members[i].order = i;
}

// 使用排序算法排序
custom_sort(members, n);

// 输出结果
for (int i = 0; i < n; i++) {
    printf("%s\n", members[i].id);
}

return 0;
}