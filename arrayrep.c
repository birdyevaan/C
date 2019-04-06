#include<stdio.h>
#include<string.h>
void main()
{
int n;
char c[70];
char b[70];
char a[70][100]; 
printf("ENTER NUMBER OF WORDS YOU WISH YOU ENTER");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%s",b);
	strcpy(a[i],b);
}
printf("ENTER WORD YOU WISH TO REPLACE");
scanf("%s",b);
printf("ENTER THE NEW WORD");
scanf("%s",c);
for(int i=0;i<n;i++)
{
	if(strcmp(a[i],b)==0)
	strcpy(a[i],c);
}
for(int i=0;i<n;i++)
{
	printf("%s\n",a[i]);
	
}
}
