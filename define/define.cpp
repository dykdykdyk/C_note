#include <stdio.h>
#define PI 3.14  //宏定义
#define Max(a,b,c)   ((a>b?a:b)>c? (a>b?a:b): c)
#define MIN 50 //测试条件编译指令
main()
{
//	float area,radius;
//	printf("Please input a radius: ");
//	scanf("%f",&radius);
//	area =PI *radius *radius;
//	printf("the area of circle is : %f\n ",area);
	int x,y,z;
    printf("Please input three integers:");
	scanf("%d,%d,%d",&x,&y,&z);
	printf("the bigger is: %d \n",Max(x,y,z));
    #if MIN>50 
		printf("MIN is greater than 50!\n");
    #else
		printf("MIN is small!\n");
    #endif
}
#undef PI //删除宏定义

