#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码


    int x, y;
    char moves[1000];
    
    // 读取起始坐标
    scanf("%d %d", &x, &y);
    // 读取移动序列
    scanf("%s", moves);
    
    int len = strlen(moves);
    
    // 处理每个移动指令
    for (int i = 0; i < len; i++) {
        switch (moves[i]) {
            case 'R': x += 1; break; // 向右移动
            case 'L': x -= 1; break; // 向左移动
            case 'F': y += 1; break; // 向前移动
            case 'B': y -= 1; break; // 向后移动
        }
    }
    
    // 判断是否回到原点
    if (x == 0 && y == 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}