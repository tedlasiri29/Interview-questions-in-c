#include<stdio.h>
void main()
{
int a,b,c;
if(a==b && b==c && c==a)
{
printf("10");
}
else if (a==b && b==c && c==a)
{
printf("5");
}
else if (b!=a && c!=a)
{
printf("1");
}
else
{
printf("0");
}
}