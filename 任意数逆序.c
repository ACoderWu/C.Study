#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	printf("请输入一个正整数，我将输出它的逆序数\n");
	scanf("%d",&a);
	int d = a;
	int e = a/10*10;
	printf("该数的逆序数是");
	
	do
	{
		b = a%10;
		printf("%d",b);
		c = c*10+b;	//单一出口，不能输出输入数字末尾的0 
		a /= 10;
	}
	while ( a > 0 );
	printf("\n");
	
	if ( d==e )
	{
	printf("或%d（不输出前列逆序数字元素0）\n",c);
	}
	
	return 0;
} 
