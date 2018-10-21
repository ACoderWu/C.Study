#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	
	printf("请输入一个数a\n");
	scanf("%d",&a);
	
	if (a<0 && a>-100)
	{
		b = -1;
	}
	else if (a>0 && a<100)
	{
		b = 1;
	}
	else if (a=0)
	{
		b = 0;
	}
	else
	{
		b = 2;
	}
	
	switch (b)
	{
		case (-1):
			printf("a<0\n");	//如果case代码块没有break断点结尾，那么程序会跳到下一个case里去。 
		case (0):
			printf("a=0\n");
			break;
		case (1):
			printf("a>0\n");
			break; 
		default:	//default后面可以不跟任何语句。不要省略default。 
			printf("超出范围\n");
			break;
	}
	
	return 0;
}

