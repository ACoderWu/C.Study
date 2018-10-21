#include <stdio.h>

int sum(int begin, int end);	//函数的声明，如果没有这个声明，那么函数定义就必须写在函数第一次使用的前面；

int main()
{
    int a = 0;
    int b = 0;
	int s = 0;

    do
	{
		scanf("%d",&a);
		scanf("%d",&b);
		if(a < b)
		{
			s = sum(a,b);	//如果前面没有函数声明或定义的话，这里会产生一个warning，如果前面没有声明或定义且后面函数类型不为 int function(int arg, int arg) 时，会产生error；
			printf("%d",s);
		}
		else
		{
			break;
		}
	}
	while(b > a);

    return 0;
}

int sum(int begin, int end)	//函数的定义
{
	int i = 0;
	int sum = 0;
	for(i = begin; i <= end; i++)
	{
		sum += i;
	}
	return sum;
}