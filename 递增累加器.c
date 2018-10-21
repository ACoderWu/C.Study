#include <stdio.h>

int sum(int begin, int end);	//函数的原型声明，如果没有这个声明，那么函数定义就必须写在函数第一次使用的前面；声明和定义头部内的参数叫形参，但现在一般直接叫“参数”
								//另外函数的原型声明不会检查参数是否一致，甚至去掉参数也是可以的，它只检查参数的类型，但是为了可读性，一般写成都和函数定义时头部一样；
int main()
{
    int a[2] = {0,0};	//数组array的定义和初始化

	int s = 0;

    do
	{
		scanf("%d",&a[0]);
		scanf("%d",&a[1]);
		if(a[0] < a[1])
		{
			s = sum(a[0],a[1]);	//如果前面没有函数声明或定义的话，这里会产生一个warning，如果前面没有声明或定义且后面函数类型不为 int function(int arg, int arg) 时，会产生error；
                                //传入函数内的参数叫实参，为了便于理解，现在一般叫“值”；
			printf("%d\n",s);

		}
		else
		{
			printf("The format is not correct.\n");
			break;
		}
	}
	while(a[1] > a[0]);


    return 0;
}

int sum(int begin, int end)	//函数的定义，类型与声明不一致会产生error；形参；

{
	int i = 0;
	int sum = 0;
	for(i = begin; i <= end; i++)
	{
		sum += i;
	}
	return sum;
}