#include<stdio.h>
/*
指针作为函数参数
*/
void swap(int *x,int *y)
{
	int temp;
	temp = *x; *x=*y;*y=temp;
	printf("x=%d,y=%d\n",*x,*y);
}
void main()
{
	int a=8,b=12;
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
}