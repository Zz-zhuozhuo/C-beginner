#include<stdio.h>
int func(int a, int b)
{
  int c;
printf("a=%d,b=%d\n", a, b);
  c = a+b;
  return c;
}
void main()
{
  int x =6 , y = 7, z = 8, r;
r = func((x--,y++,x+y), --z);
printf("r=%d\n", r);
}
