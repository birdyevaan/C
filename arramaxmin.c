#include<stdio.h>
void main()
{
int a[100],n,t,max,min;
printf("ENTER THE NUMBER OF ELEMENTS");
scanf("%d",&n);
for(int p=0;p<n;p++)
{
	printf("\nENTER THE NUMBER");
	scanf("%d",&t);
	a[p]=t;
}
max=a[0];
min=a[0];
for(int p=0;p<n;p++)
{
	if(a[p]>max)
		max=a[p];
	if(a[p]<min)
		min=a[p];
}
printf("MAX IS\t%d\t\tMIN IS\t%d\n\n",max,min);
}
