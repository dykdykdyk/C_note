#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	//�Զ�д�ļ���ʽ��text.tx�ļ�
	if((fp =fopen("d:\\target\\test.txt","w+")) ==NULL)
	{
		printf("\n Can not open target file,press any key to quit!");
	}
	printf("Write down your message: \n");
	ch =getchar(); /*�Ӽ��̶���һ���ַ������ѭ��*/
	while(ch!='\n')
	{
		fputc(ch,fp);//д�ַ�������
		ch=getchar();
	}
	rewind(fp); //���ڰ�fp��ָ�ļ����ڲ�λ��ָ���Ƶ��ļ�ͷ
	ch =fgetc(fp); // ��ȡ�ļ��е�һ������
		while(ch!=EOF)
		{
			putchar(ch);//����Ļ��������ַ���
			ch=fgetc(fp);
		}
		printf("\n");
		fclose(fp);
}