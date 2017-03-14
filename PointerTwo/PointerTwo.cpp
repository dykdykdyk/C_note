#include<stdio.h>
/*
 指针作为函数参数的简单使用
 由于基本数据类型的形参和实参在函数调用的过程中，是单向传递的，
 形参值得改变不会影响到实参值得改变。
 而指针不同，形参和实参的传递是值传递
 切记，必须是指针所指向的变量的值发生了改变，在函数调用结束后
 ，这些变量值的变化依然保留下来。
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
   *pointer_3=7;//改变了指针所指向的变量的值 =7
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