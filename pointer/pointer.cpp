#include<stdio.h>
/*
 *ptr ��ʾָ��ptr��ָ�������

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
		//ָ�볣��
    char *const pst="abcd";
//	pstr=&"efg";//ָ�뱾���ֵ�޷��ı�
}