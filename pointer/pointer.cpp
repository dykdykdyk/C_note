#include<stdio.h>
/*
 *ptr 表示指针ptr所指向的内容

*/
void main()
{
	int i =10,j;
	int *ptr =&i;//定义一个整形变量的指针ptr,其初值为i的地址
	j =*ptr;
	printf("i =%d,j =%d\n",i,j);
	printf("*ptr =%d",*ptr);
	printf("&ptr =%d",&ptr);
	int aa=20;
	const int *p =&aa;
	   p=&i;
		printf("*p =%d",*p);
	


		//指针常量
    char *const pst="abcd";
//	pstr=&"efg";//指针本身的值无法改变

}