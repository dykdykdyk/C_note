#include<stdio.h>
/*
 ָ����Ϊ���������ļ�ʹ��
 ���ڻ����������͵��βκ�ʵ���ں������õĹ����У��ǵ��򴫵ݵģ�
 �β�ֵ�øı䲻��Ӱ�쵽ʵ��ֵ�øı䡣
 ��ָ�벻ͬ���βκ�ʵ�εĴ�����ֵ����
 �мǣ�������ָ����ָ��ı�����ֵ�����˸ı䣬�ں������ý�����
 ����Щ����ֵ�ı仯��Ȼ����������
*/
int main()
{void swap(int *p1,int *p2);
   int a,b;
   int *pointer_1,*pointer_2;
   printf("please enter a and b:");
   scanf("%d,%d",&a,&b);
   pointer_1=&a;
   pointer_2=&b;
   if(a<b) swap(pointer_1,pointer_2);
   printf("max=%d,min=%d\n",a,b);
   printf("max=%d,min=%d\n",*pointer_1,*pointer_2);
    
   int *pointer_3;
   int c=5;
   pointer_3=&c;
   printf("max=%d\n",*pointer_3);
   *pointer_3=7;//�ı���ָ����ָ��ı�����ֵ =7
   printf("max=%d\n",*pointer_3);
   printf("max=%d\n",c);
   return 0;

	
}
void swap(int *p1,int *p2)
{int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}