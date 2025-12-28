#include<stdio.h>
int main()
{  
     int a, b, *p1, *p2;
     p1 = &a;
     p2 = &b;
     a = 5;
     b = 7;
     printf("a=%d,b=%d,p1=%d,p2=%d\n", a, b, p1, p2);
     printf("&a=%d,*&a=%d,&b=%d,*&b=%d\n", &a, *&a, &b, *&b);
     return 0;
}