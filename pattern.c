#include<stdio.h>
void main()
{
int a=5;
for(int u=0;u<5;u++)
{
for(int b=0;b<=u;b++)
{
if(u%2!=0)
printf("*");
else 
printf("0");
}
printf("\n");
}
}
