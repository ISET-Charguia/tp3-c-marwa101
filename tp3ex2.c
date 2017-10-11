/*
 ============================================================================
 Name        : tp3ex2.c
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
	do
	{
	printf("entrer un entier: ");
	scanf("%d",&a);
	printf("entrer un entier: ");
	scanf("%d",&b);
	}while(a<b);
	r=a%b;
	while(r!=0)
	{
		aux=a;
		a=b;
		b=r;
		r=a%b;
	}
	printf("le pgcd des deux entiers est: %d",b);
return 0;
}
