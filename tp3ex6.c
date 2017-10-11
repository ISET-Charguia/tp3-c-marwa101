/*
 ============================================================================
 Name        : tp3ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int n,i,j,s,f,c,k ;
	printf("donner n: ");
	scanf("%d",&n);
	f=n;
	for(k=1;k<=f;k++)
	{
		printf(" ");
	}
printf("*");
s=1;
for(i=1;i<n;i++)
{
	s=s+2;
	printf("\n");
	f=f-1;
	for(c=1;c<=f;c++)

	{
		printf(" ");
	}
for(j=1;j<=s;j++)
{
printf("*");
}
}
return 0;
}
