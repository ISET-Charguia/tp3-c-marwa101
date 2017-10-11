/*
 ============================================================================
 Name        : tp3ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int n,r,x,i,s;
	do
	{
		printf("entrer un entier: ");
		scanf("%d", &n);
	} while (n < 0);
i=1;
s=0;
	do

	{
		r = n % 2;
		x=r*i;
		s=s+x;
		i=i*10;
		n = n / 2;
	} while (n  != 0);
printf("%d",s);
return 0;
}
