/*调试C程序  工程 设置 调试 程序变量*/
#include<stdio.h>
int main(int argc,char *argv[])
{
	while(argc-->1)
	printf("%s\n",* ++argv);
	return 0;
}