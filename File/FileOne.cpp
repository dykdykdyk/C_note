#include<stdio.h>
/*
读取文件信息 并且显示出来
*/
main()
{
	FILE *fp;
	char ch;
	if((fp =fopen("d:\\target\\test.txt","r+")) ==NULL)
	{
		printf("\n Can not open target file,press any key to quit!");
//		getch();
//		exit(1);
	}
	//fgetc 读取字符串的函数
	ch =fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);//在屏幕上面输出字符串
		ch =fgetc(fp);
	}
	//关闭文件指针
	fclose(fp);
}