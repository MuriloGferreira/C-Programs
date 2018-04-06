#include<stdio.h>
#include<stdlib.h>
int main()
{ int i, soma=0;
	for(i=10;i<=200;i++)
	{
	if(i%2==0)
	{printf("%d\n",i);
	}
	else
	{
		soma+=i;}
	}
	printf("%d", soma);
		return 0;
}

