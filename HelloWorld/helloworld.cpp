#include<math.h>
#include<stdio.h>
#define PI 3.14
	/*
	*/
main()
{
    char grade;
	scanf("%c",&grade);
	printf("your score:");
	switch(grade)
	{
	case 'A':printf("85~100\n");break;
	case 'B':printf("85~100\n");break;
	case 'C':printf("85~100\n");break;
	case 'D':printf("85~100\n");break;
	default:printf("enter data error!\n");
	}
}