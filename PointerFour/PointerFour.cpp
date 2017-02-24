#include<stdio.h>
/*
指向函数的指针
int func(int a,int b);
int (*fp)(int x,int y);
后面就直接这样调用 fp=func;
*/
float add(float x,float y)
{
	return (x+y);
}
float sub(float x,float y)
{
	return (x-y);
}
void oper(float(*pfun)(float,float),float a,float b)
{
	printf("a =%f,b=%f,result =%f\n",a,b,pfun(a,b));
}
main()
{
	printf("add: ");
	oper(add,3,7);
	printf("sub: ");
	oper(sub,3,7);
}