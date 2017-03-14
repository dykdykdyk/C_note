#include<stdio.h>
/*
≤‚ ‘
*/

void main()
{
	int a[10], *p=a;
	a[0]=0;
	a[1]=1;
	a[2]=2;
	a[3]=3;
	a[4]=4;
	a[5]=5;
	printf("a=%d\n",*p++);
}