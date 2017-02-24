/*
结构体的简单实用
*/
#include<stdio.h>
struct student
{
	long num;//学号
	char name[20];//姓名
	char sex;//性别
	float score;//成绩
}
stu1 ={200501,"LinLin",'F',80.5};
main()
{
	student stu2;
	stu2 =stu1; //引用整个结构体变量
	printf("Number =%d\n",stu2.num);//引用结构体成员
	printf("Name =%s\n",stu2.name);//引用结构体成员
	printf("Sex =%c\n",stu2.sex);//引用结构体成员
	printf("Score =%d\n",stu2.score);//引用结构体成员
}
