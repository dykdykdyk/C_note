#include<stdio.h>
/*
ָ������ָ��
int func(int a,int b);
int (*fp)(int x,int y);
�����ֱ���������� fp=func;



  main()
{
  int max(int,int);
  int (*p)(int,int);
  int a,b,c;
  p=max;  //ʹPָ��max����,��������β�����
  	printf("please enter a and b:");
	scanf("%d,%d",&a,&b);
	c=(*p)(a,b); //ͨ��ָ���������max����
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
