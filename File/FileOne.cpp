#include<stdio.h>
/*
��ȡ�ļ���Ϣ ������ʾ����
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
	//fgetc ��ȡ�ַ����ĺ���
	ch =fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);//����Ļ��������ַ���
		ch =fgetc(fp);
	}
	//�ر��ļ�ָ��
	fclose(fp);
}