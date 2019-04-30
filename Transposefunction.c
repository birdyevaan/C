#include<stdio.h>
void print(int y[100][100],int u,int z)
{
for(int i=0;i<u;i++)
{
	for(int j=0;j<z;j++)
		{	
			if(i!=j)	
			printf("%d  ",y[j][i]);
			else
			printf("%d  ",y[i][j]);
		}
		printf("\n");
}
}
void main()
{
int A[100][100],i,p;
printf("ENTER THE NO OF ROWS AND COLOUMNS");
scanf("%d%d",&i,&p);
for(int k=0;k<i;k++)
{
	for(int j=0;j<p;j++)
		{
			scanf("%d",&A[k][j]);
		}
}
print(A,i,p);
}
