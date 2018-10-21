#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d",&a);	//输入整数
	int i = 0;
	int b = 0;
	int c = 0;
	int e = 0;
	int f = 0;
	
	if (a<0)	//如果是负数则输出 fu 且转换成正数
	{
		printf("fu ");
		a = -a;
	}
	
	/*
	do	//将整数不计尾零逆序且记录位数
	{
		i = 10;
		b = a%i;
		a /= 10;
		c = c*10 + b;	//不计尾零，逆序数和原整数位数可能不一样
		e++;	//记录位数
	}
	while (a > 0);
	*/
	
	//注释的do-while循环部分可以换成for循环如下
	for (i = 10; a>0; e++)
	{
		b = a%i;
		a /= 10;
		c = c*10 + b;
	}
	
	do	//取逆序数余并输出相应拼音且记录位数
	{
		i = 10;
		b = c%i;
		
		switch (b)	//输出取余拼音
		{
			case 0 :
				printf("ling");
				break;
			case 1 :
				printf("yi");
				break;
			case 2 :
				printf("er");
				break;
			case 3 :
				printf("san");
				break;
			case 4 :
				printf("si");
				break;
			case 5 :
				printf("wu");
				break;
			case 6 :
				printf("liu");
				break;
			case 7 :
				printf("qi");
				break;
			case 8 :
				printf("ba");
				break;
			case 9 :
				printf("jiu");
				break;
			default :
				break;
		}
		
		if (c>=10)	//如果取余后是二位数或以上则输出空格	//此处不能为"c>10"，因为101、5101等第二位为0时第二位后面没有空格输出
		{
			//putchar(32);
			putchar(' ');	//32是空格的 ASCⅡ 码，putchar只能输出一位字符，并且只能用单引号'不能使用双引号"，不然会报error.
		}
		
		c /= 10;
		f++;	//记录逆序数位数
	}
	while (c > 0);
	
	lingloop: if (f<e)	//当逆序数位数小于输入数位数时，输出“ ling”，且将位数增加一位，再循环比较
	{
		printf(" ling");
		f++;
		goto lingloop;	//goto语句做判断循环好像很方便？但是容易造成语句混乱且代码可读性差、不易维护
	}
	
	//printf("%d",c);
	
	return 0;
}
