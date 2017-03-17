#include<stdio.h>
/*
测试
*/

void main()
{
	int a[4]={1,3,5,7};
	int (*p)[4];
	p=&a;  //如果这里写成 p=a的话  就报错了,指向a[0]
	printf("%d\n",(*p)[3]);
	char * string;
	string ="I love China!";
}