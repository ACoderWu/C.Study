#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d",&a);
	if(1<=a<=10)	//可以通过编译，但是此时计算机是先算的1<=a得到的结果是0或1，再拿0或1和10比。因此不管输入什么，最后结果都是1，即输出yes。
	{
		printf("yes");
	}
	else	//if和else如果没有跟{}，那么函数效果则只执行后面的一句语句。
	{
		printf("no");
	}
	
	return 0;
}