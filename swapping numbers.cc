#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;
a=10;
b=15;
 
a=a+b;
b=a-b;
a=a-b;
printf("The swapped values of a and b are:%d,%d",a,b);
return 0;
}
