#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// 函数声明
void generate_secret_number(int *secret);
int play_guess_game(int secret);
int get_user_guess();
void check_guess(int guess, int secret);

int main() {
    SetConsoleOutputCP(65001);
    int play_again = 1; // 初始化为1，让游戏至少运行一次
    int secret_number; // 局部变量
    
    // 设置随机数种子
    srand(time(NULL));
    
    printf("=== 猜数游戏 (局部变量版本) ===\n");
    
    while(play_again == 1)  // 去掉分号
    {
        // 生成秘密数字（通过地址传递）
        generate_secret_number(&secret_number);
        
        // 开始游戏（通过值传递）
        play_guess_game(secret_number);
        
        // 询问是否再玩一次
        printf("\n是否再玩一次？(1-是, 0-否): ");
        scanf("%d", &play_again);
        
    } 
    
    printf("游戏结束，谢谢游玩！\n");
    return 0;
}

// 生成1-200的随机数（通过指针修改局部变量）
void generate_secret_number(int *secret) {
    *secret = rand() % 200 + 1;
    // 调试用：显示秘密数字
    // printf("(调试: 秘密数字是 %d)\n", *secret);
}

// 猜数游戏主逻辑
int play_guess_game(int secret) {
    int guess, attempts = 0;
    
    printf("\n我已经想好了一个1-200之间的数字，请开始猜吧！\n");
    
    do  // 使用do-while循环，确保至少执行一次
    {
        guess = get_user_guess();
        attempts++;
        check_guess(guess, secret);
    } while(guess != secret);  // 去掉分号
    
    printf("恭喜！你用了 %d 次猜中了数字 %d！\n", attempts, secret);
    return attempts;
}

// 获取用户猜测
int get_user_guess() {
    int guess;
    printf("请输入你的猜测: ");
    scanf("%d", &guess);
    return guess;
}

// 检查猜测结果
void check_guess(int guess, int secret) {
    if(guess > secret) {
        printf("猜大了！再试试看。\n");
    } else if(guess < secret) {
        printf("猜小了！再试试看。\n");
    } else {
        printf("猜对了！\n");
    }
}