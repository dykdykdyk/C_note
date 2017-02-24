#include <stdio.h>
#include <conio.h>
long functionA(long,long);
long functionB(long);
fan()
{ 
   printf("hello,world!\n");
}
printStar(int n)
{
	int cnt;
	for(cnt =0;cnt<n;cnt++)
	printf("*");
	printf("\n");
}
main()
{
//	int count;
//	printf("please input star numbers (count):");
//	scanf("%d",&count);
//	printStar(count);
//	fan();
//	printStar(count);
//	return 0;




    long m,n,c;
	printf("please input star numbers (m and n):");
	scanf("%ld  %ld",&m,&n);
	c=functionA(m,n);
	printf("C(%ld,%ld)=%ld\n",m,n,c);
}
long functionA(long m,long n)
{
	long a,c;
	a=functionB(m);
	c=functionB(n);
	c=a/c;
	a=functionB(m-n);
	c=c/a;
	return(c);
}
long functionB(long x)
{
	long i,result =1;
	for(i=1;i<=x;i++)
		result =result *i;
	return (result);    
}
