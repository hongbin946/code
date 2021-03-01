#include <stdio.h>
int x=1;
int y=2;
int addtwonum();
int main()
{
int result;
result=addtwonum();
printf("result is:%d",result);
return 0;
}
extern int x;
extern int y;
int addtwonum()
{
return x+y;
}
