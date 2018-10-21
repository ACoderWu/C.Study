#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n = 0;
	int m = 0;
	int s = 0;
	int t = 0;	//计数器
	
	//printf("plese input n<m\n");
	scanf("%d %d",&n,&m);
	
	for (int x = 2; t < m; x++)	//当计数小于所需素数上限时启动循环，从第一个素数2开始循环
	{
		_Bool prime = 1;	//假设x是素数更容易计算证伪
		for (int i = 2; i < x; i++)
		{
			if (x%i == 0)	//证伪法判断x是否素数
			{
				prime = 0;	//prime为0则x不为素数
				break;	//当检测到prime为0时断开循环，直接进入下一步
			}
		}
		
		if (prime == 1)
		{
			t++;	//寻找到一个素数就记录一次
			if (t>=n)	//当t到达所求素数下限时，计算需求公式
			{
				printf("%d\n",x);
				s += x;
			}
		}
		
	}
	
	printf("%d",s);
	
	return 0;
}
