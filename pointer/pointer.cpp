#include<stdio.h>
/*
 *ptr ��ʾָ��ptr��ָ�������

*/
void main()
{
	int i =10,j;
	int *ptr =&i;//����һ�����α�����ָ��ptr,���ֵΪi�ĵ�ַ
	j =*ptr;
	printf("i =%d,j =%d\n",i,j);
	printf("*ptr =%d",*ptr);
	printf("&ptr =%d",&ptr);
	int aa=20;
	const int *p =&aa;
	   p=&i;
		printf("*p =%d",*p);
	


		//ָ�볣��
    char *const pst="abcd";
//	pstr=&"efg";//ָ�뱾���ֵ�޷��ı�

}