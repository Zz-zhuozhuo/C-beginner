#include <stdio.h>
#include <stdlib.h>

#define SIZE 9
#define MAX_QUEUE 1000

typedef struct
{
    int x, y;
} Point;

typedef struct
{
    Point pt;   // 当前点
    int dist;   // 到达该点的距离
    int parent; // 在队列里的父节点下标 用于回溯路径
} Node;

// 四个方向：上、下、左、右
int dir[4][2] = {
    {-1, 0}, {1, 0}, {0, -1}, {0, 1}};

// 判断位置是否落在障可行区域上
int isValid(int x, int y, int maze[SIZE][SIZE], int visited[SIZE][SIZE])
{
    return (x >= 0 && x < SIZE && y >= 0 && y < SIZE &&
            maze[x][y] == 0 && !visited[x][y]);
}

int main()
{
    int maze[SIZE][SIZE] = {
        {0, 0, 0, 1, 1, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 1, 1, 0, 0, 0, 1, 1},
        {0, 0, 1, 1, 0, 0, 1, 0, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0, 1, 0},
        {0, 0, 1, 0, 1, 0, 0, 0, 0}};

    Point start, end;
    printf("请输入起点坐标 (x y): ");
    scanf("%d %d", &start.x, &start.y);
    printf("请输入终点坐标 (x y): ");
    scanf("%d %d", &end.x, &end.y);

    int visited[SIZE][SIZE] = {0}; // 记录格子是否访问过
    Node queue[MAX_QUEUE];
    int front = 0, rear = 0;

    // 起点入队
    queue[rear].pt = start;
    queue[rear].dist = 0;
    queue[rear].parent = -1;
    visited[start.x][start.y] = 1;
    rear++;

    int found = 0;
    int endIndex = -1;

    // BFS广度优先探索
    while (front < rear)
    {
        Node current = queue[front];
        Point p = current.pt;

        if (p.x == end.x && p.y == end.y)
        {
            found = 1;
            endIndex = front;
            break;
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = p.x + dir[i][0];
            int ny = p.y + dir[i][1];

            if (isValid(nx, ny, maze, visited))
            {
                visited[nx][ny] = 1;
                queue[rear].pt.x = nx;
                queue[rear].pt.y = ny;
                queue[rear].dist = current.dist + 1;
                queue[rear].parent = front;
                rear++;
            }
        }
        front++;
    }

    if (found)
    {
        printf("已找到路径,路径长度为 : %d\n", queue[endIndex].dist);

        // 回溯路径
        int path[MAX_QUEUE];
        int len = 0;
        int idx = endIndex;
        while (idx != -1)
        {
            path[len++] = idx;
            idx = queue[idx].parent;
        }
        for (int i = len - 1; i >= 0; i--)
        {
            printf("(%d, %d)", queue[path[i]].pt.x, queue[path[i]].pt.y);
            if (i > 0)
                printf(" <- ");
        }
        printf("\n");
    }

    return 0;
}

/*找到最短路径/最合理路径是我们导航组的任务之一  它有专门的算法实现 叫a星算法
如果对导航算法感兴趣的可以提前了解一下 本质上和这道题的主要思想差不多 新手一开始接触a*的时候
可能觉得会有点难 你会发现有很多人在做考核的时候就开始打退堂鼓 但是只要你坚持下来了一切就皆有可能
ps：学长我也不是计算机学院的（电智的）
*/