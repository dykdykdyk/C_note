/*
�ṹ��ļ�ʵ��
*/
#include<stdio.h>
struct Student
{
	long num;//ѧ��
	char name[20];//����
	char sex;//�Ա�
	float score;//�ɼ�
};
struct Data
{
	char addr[30];
     struct Student st;
};
Student stu1 ={200501,"LinLin",'F',80.5};
main()
{
	Student stu2;
	stu2 =stu1; //���������ṹ�����
	printf("Number =%d\n",stu2.num);//���ýṹ���Ա
	printf("Name =%s\n",stu2.name);//���ýṹ���Ա
	printf("Sex =%c\n",stu2.sex);//���ýṹ���Ա
	printf("Score =%d\n",stu2.score);//���ýṹ���Ա
}
