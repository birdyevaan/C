#include<stdio.h>
void add(int A[100][100],int B[100][100],int a,int b)
{
int P[a][b];
for(int i=0;i<a;i++)
{
	for(int j=0;j<b;j++)
		{
			P[i][j]=A[i][j]+B[i][j];
		}
}
for(int i=0;i<a;i++)
{
	for(int j=0;j<b;j++)
		{
			printf("%d ",P[i][j]);
		}
		printf("\n");
}
}
void main()
{
int C[100][100],G[100][100],y,t;
printf("ENTER THE NO OF ROWS AND COLOUMNS");
scanf("%d%d",&y,&t);
for(int i=0;i<y;i++)
{
	for(int j=0;j<t;j++)
		{
			printf("ENTER THE %d%d ELEMENT",i,j);
			scanf("%d",&C[i][j]);
		}
}
for(int i=0;i<y;i++)
{
	for(int j=0;j<t;j++)
		{
			printf("ENTER THE %d%d ELEMENT",i,j);
			scanf("%d",&G[i][j]);
		}
}
add(C,G,y,t);
}
