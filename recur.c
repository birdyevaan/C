/*findsumofdigitsusingrecursivefunction*/
#include<stdio.h>
int recur(int a)
{
    if (a!= 0)
    {
        return(a%10+recur(a/10));
    }
    else
    {
       return 0;
    }
}
void main()
{
int a,b;
printf("ENTER THE NUMBER");
scanf("%d",&a);
b=recur(a);
printf("%d",b);
}
