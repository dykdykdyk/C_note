#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	//以读写文件方式打开text.tx文件
	if((fp =fopen("d:\\target\\test.txt","w+")) ==NULL)
	{
		printf("\n Can not open target file,press any key to quit!");
	}
	printf("Write down your message: \n");
	ch =getchar(); /*从键盘读入一个字符后进入循环*/
	while(ch!='\n')
	{
		fputc(ch,fp);//写字符串函数
		ch=getchar();
	}
	rewind(fp); //用于把fp所指文件的内部位置指针移到文件头
	ch =fgetc(fp); // 读取文件中的一行内容
		while(ch!=EOF)
		{
			putchar(ch);//在屏幕上面输出字符串
			ch=fgetc(fp);
		}
		printf("\n");
		fclose(fp);
}