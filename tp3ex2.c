/*
 ============================================================================
 Name        : ghfj.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int a,b,r,aux;
	printf("entrer un entier: ");
	scanf("%d",&a);
	printf("entrer un entier: ");
	scanf("%d",&b);
	if(a<b)
	{
	r=a%b;
	while(r!=0)
	{
		aux=a;
		a=b;
		b=r;
		r=a%b;
	}
	if(a>b)
	{
		r=b%a;
		while(r!=0)
			{
				aux=a;
				a=b;
				b=r;
				r=b%a;
			}
	}
	}
	printf("le pgcd des deux entiers est: %d",b);
return 0;
}

