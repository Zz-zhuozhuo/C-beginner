#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 全局变量
int secret_number;

// 函数声明
void generate_secret_number();
void play_guess_game();
int get_user_guess();
void check_guess(int guess);

int main() {
    int play_again;
    
    // 设置随机数种子
    srand(time(NULL));
    
    printf("=== 猜数游戏 (全局变量版本) ===\n");
    
    do {
        // 生成秘密数字
        generate_secret_number();
        
        // 开始游戏
        play_guess_game();
        
        // 询问是否再玩一次
        printf("\n是否再玩一次？(1-是, 0-否): ");
        scanf("%d", &play_again);
        
    } while(play_again == 1);
    
    printf("游戏结束，谢谢游玩！\n");
    return 0;
}

// 生成1-200的随机数
void generate_secret_number() {
    secret_number = rand() % 200 + 1;
    // 调试用：显示秘密数字
    // printf("(调试: 秘密数字是 %d)\n", secret_number);
}

// 猜数游戏主逻辑
void play_guess_game() {
    int guess, attempts = 0;
    
    printf("\n我已经想好了一个1-200之间的数字，请开始猜吧！\n");
    
    do {
        guess = get_user_guess();
        attempts++;
        check_guess(guess);
    } while(guess != secret_number);
    
    printf("恭喜！你用了 %d 次猜中了数字 %d！\n", attempts, secret_number);
}

// 获取用户猜测
int get_user_guess() {
    int guess;
    printf("请输入你的猜测: ");
    scanf("%d", &guess);
    return guess;
}

// 检查猜测结果
void check_guess(int guess) {
    if(guess > secret_number) {
        printf("猜大了！再试试看。\n");
    } else if(guess < secret_number) {
        printf("猜小了！再试试看。\n");
    }
}