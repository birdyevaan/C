/*check no of prime numbers in array using function*/
#include<stdio.h>
void check(int* A,int z)
{
int u,sum=0;
for(int j=0;j<z;j++)
{
u=0;
for(int i=A[j]-1;i>1;i--)
{
	if(A[j]%i==0)
		u=1;

}
if(u!=1)
sum+=1;
}
printf("%d",sum);
}
void main()
{
int n,B[100];
printf("ENTER THE NUMBER OF ELEMENTS");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d",&B[i]);
}
check(B,n);
}
