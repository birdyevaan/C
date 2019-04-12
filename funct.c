#include<stdio.h>
void swap(int a,int b);
void main()
{
int c,b;
printf("ENTER X AND Y");
scanf("%d%d",&c,&b);
swap(c,b);
printf("X=%d \t Y=%d\n",c,b);
}
void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("X=%d \t Y=%d\n",a,b);
}





