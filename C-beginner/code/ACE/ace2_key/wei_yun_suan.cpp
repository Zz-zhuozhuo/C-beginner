#include <stdio.h>
//回调函数
int CallBack(int a, int b, int(*culculation)(int x, int y))
{
        return culculation(a, b);
}
//加
int add(int a, int b)
{
        while (b != 0) {
                int no_c = a ^ b; // 无进位加法
                int c = (unsigned int)(a & b) << 1; // 进位加法，防止越界
                a = no_c;
                b = c;
        }
        return a;
}
//减
int minus(int a, int b)
{
        b = add(~b, 1); // ~b + 1
        return add(a, b); // a + (-b)
}
int main()
{
        float a, b;
        int(*pa)(int a, int b);//函数指针
        printf("请输入两个数a、b：");
        scanf_s("%f %f", &a, &b);
        printf("请输入你要执行的函数：");
        char ch;
        scanf_s(" %c", &ch, 1);
        switch (ch)
        {
                case '+':
                        pa = add;//加
                        break;
                case '-':
                        pa = minus;//减
                        break;
                default:
                        printf("输入错误");
                        return 0;
        }
        printf("结果为：%d", CallBack(a, b, pa));
        return 0;
}
