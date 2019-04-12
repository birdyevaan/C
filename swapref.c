#include<stdio.h>
void swap(int*,int*);
void main()
{
int a,b;
printf("ENTER X AND Y");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("\nX=%d\tY=%d",a,b);
}
void swap(int *l,int *m)
{
int t;
t=*l;
*l=*m;
*m=t;
printf("\nX=%d\tY=%d",*l,*m);
}

