#include <stdio.h>

int main()
{
	const int AMOUNT = 100;	const //定义的是常量，即AMOUNT是常量,通常常量要用大写强调
	int price = 0;	//没有const定义的是变量
	
	printf("请输入金额(元):\n");
	scanf("%d",&price);	//scanf的""里面有什么就必须输入什么，如果还有空格还要必须输入一个字符。
	
	int change = AMOUNT - price;	//int change = 100 - price;	这里的100叫直接量
	printf("找您%d元。\n",change);
	
	return 0;
}
