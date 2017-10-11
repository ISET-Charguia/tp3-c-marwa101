/*
 ============================================================================
 Name        : tp3ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int a,nbdiv,i;
		do
		{
			printf("donner un entier :");
			scanf("%d",&a);
		}while(a<0);
	nbdiv=1;
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
			nbdiv=nbdiv+1;
	}
	if(nbdiv==2)
		printf("%d est premier",a);
		else printf("%d est non premier",a);
	return 0;
}
