#include<stdio.h>
main()
{
	int array[2][3] ={{11,12,13},{21,22,23}};
	int i,j;
	for(i =0;i<2;i++)
	{
		printf("%0x\n",*(array+i));
		for(j=0;j<3;j++)
			printf("%d ",*(*(array+i)+j));
		printf("\n");
	}
	printf("\n");
}