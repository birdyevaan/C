#include<stdio.h>
void main()
{
int a,b,c;
printf("\nENTER THE THREE NUMBERS");
scanf("%d%d%d",&a,&c,&b);
if(a>b&&a>c)
{
printf("\nTHE GREATEST NUMBER IS %d",a);
if(b>c)
{
printf("\nTHE SMALLEST NUMBER IS %d",b);
}
else 
printf("\nTHE SMALLEST NUMBER IS %d",c);
}
else if(b>c&&b>a)
{
printf("\nTHE GREATEST NUMBER IS %d",b);
if(a>c)
{
printf("\nTHE SMALLEST NUMBER IS  %d",c);
}
else
printf("\nTHE SMALLEST NUMBER IS %d",a);
}
else
{
printf("\nLARGEST IS%d",c);
if(a>b)
printf("\nSMALLEST IS%d",b);
else 
printf("\nSMALLEST IS%d",a);
}
}
