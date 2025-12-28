#include <iostream> 
#include <windows.h> 
using namespace std; 

#include <iostream> 
#include <windows.h> 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
using namespace std; 

//本题不考虑0，因为0分为+0和-0，为特殊情况

//计数器，表示从末位开始往前推几位
// int count = 0; // Remove global count

//标志是否为正
bool positive = true;

void change_10_to_2(int, char *, int);
void calculate_fanma(char *,char *);
void calculate_buma(char *,char *,char *);

//利用递归算法将十进制转化为二进制，用字符串来表示
void change_10_to_2(int n, char *X, int count)
{
    if(n >= 2)
    {
        count++;
        change_10_to_2((n/2), X, count);
    }

    //从末位往前推count位处开始判断
    if(n % 2 != 0)
        X[7 - count] = '1';

    // No need to decrement count here since it's passed by value
    return;
}

//计算反码
void calculate_fanma(char *X,char *Y)
{
    if(!positive)
        for(int a = 1;a < 8;a++)
        {
            X[a] = (Y[a]=='1') ? '0' :'1';
            X[0] = Y[0];
            X[8] = '\0';
        }
    else
    //拷贝字符串，即反码等于源码
        strcpy(X, Y);
    return;
}

void calculate_buma(char *X,char *Y,char *Z)
{
    if (!positive)
    {
        int b = 0;
        //将反码的字符串重新转化为数字
        for(int a = 7;a > 0;a--)
            if(Z[a] == '1')
                b += pow(2,(7-a));
        change_10_to_2(++b, X, 0);
        X[0] = Y[0];
        X[8] = '\0';
    }
    else
    //拷贝字符串，即补码等于源码
        strcpy(X, Y);
    return;
}

int main()
{
    SetConsoleOutputCP(65001); //解决中文乱码

    char yuanma[9],fanma[9],buma[9];
    //将字符串全部元素初始化为‘0’
    memset(yuanma,'0',9);
    memset(buma,'0',9);
    //末尾加上结束符才能够用printf函数进行打印
    yuanma[8]='\0';
    int X;
    scanf("%d",&X);

    if(X < 0)
    {
        yuanma[0] = '1';
        positive = false;
    }

    if(!positive)
        X *= -1;
    
    change_10_to_2(X, yuanma, 0);
    printf("源码：%s \n",yuanma);

    calculate_fanma(fanma,yuanma);
    printf("反码：%s \n",fanma);

    calculate_buma(buma,yuanma,fanma);
    printf("补码：%s \n",buma);

    return 0;
}