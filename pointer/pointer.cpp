#include<stdio.h>
/*
 *ptr 表示指针ptr所指向的内容

*/
void main()
{
	int i =10,j;
	int *ptr =&i;
	printf("*ptr =%d/n",*ptr);
	printf("&ptr =%d/n",&ptr);
	int aa=20;
	const int *p =&aa;
	   p=&i;
		//指针常量
    char *const pst="abcd";
//	pstr=&"efg";//指针本身的值无法改变
}