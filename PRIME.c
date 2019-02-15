#include<stdio.h>
void main()
{
int a,b=0;
printf("ENTER THE NUMBER");
scanf("%d",&a);
for(int o=2;o<a;o++)
{
if(a%o==0)
{
b=1;
}
}
if(b==1)
{
	printf("\nNOT PRIME");
}
else if(b==0)
printf("\nPRIME");
}
