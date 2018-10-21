#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
	srand(time(0));
	int a = rand()%100;
	int b = 0;
	int count = 0;
	
	printf("本机想好了一个小于99的自然数，就等你来猜了~\n");
	do
	{
		printf("请输入你猜的数字\n");
		scanf("%d",&b);
		count++;
		if ( a<b )
		{
			printf("你猜的数偏大\n");
		}
		else if ( a>b )
		{
			printf("你猜的数偏小\n");
		}
	}
	while ( a != b );
	printf("恭喜你猜对了，数字是%d；你用了%d次猜中\n",a,count);
	MessageBoxA(0,"感谢你的参与","感谢",1);
	
	return 0;
}
