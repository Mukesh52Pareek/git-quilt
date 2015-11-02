#include<stdio.h>
#include"main.h"
int main()
{

	int a,b,s,p;
	a=10;
	b=20;
	s=sum(a,b);
	printf("Sum=%d",sum);
	p=prod(a,b);
        printf("Prod=%d",p);
        return 0;
}

int sum(int a,int b)
{


	return a+b;
}
int prod(int a,int b)
{


        return a*b;
}

