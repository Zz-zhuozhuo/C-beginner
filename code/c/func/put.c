#include <stdio.h>
int main()
{
	char str[]={"China\nBeijing"};
	puts(str);
	return 0;
}

/*
作用：将一个字符串(以′\0′结束的字符序列)输出到终端。
用puts函数输出的字符串中可以包含转义字符。
在用puts输出时将字符串结束标志′\0′转换成′\n′，即输出完字符串后换行
*/