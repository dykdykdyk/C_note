#include<stdio.h>
/*
����
*/

void main()
{
	int a[4]={1,3,5,7};
	int (*p)[4];
	p=&a;  //�������д�� p=a�Ļ�  �ͱ�����,ָ��a[0]
	printf("%d\n",(*p)[3]);
	char * string;
	string ="I love China!";
}