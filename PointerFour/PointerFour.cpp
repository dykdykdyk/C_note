#include<stdio.h>
/*
指向函数的指针
int func(int a,int b);
int (*fp)(int x,int y);
后面就直接这样调用 fp=func;



  main()
{
  int max(int,int);
  int (*p)(int,int);
  int a,b,c;
  p=max;  //使P指向max函数,不必设计形参内容
  	printf("please enter a and b:");
	scanf("%d,%d",&a,&b);
	c=(*p)(a,b); //通过指针变量调用max函数
	printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
	return 0;
}
 int max(int x,int y)
 {int z;
	if(x>y) z=x;
	else z=y;
	return(z);
 }





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
