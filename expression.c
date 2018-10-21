#include <stdio.h>

int main()
{
	int a = 0;	//这是一个表达式即expression
	int b = 3;
	int c = 10 + (a=b);	//This is a expression too, 里面的c、10、a、b都叫算子，+、=都叫运算符。
	/*C语言中“=”是一个运算（动作）符，像上式一样式子右边里面还有一个“=”的叫嵌入式赋值，可读性差，不易维护，程序容易出错，不提倡这样写*/
	
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	
	printf("将bc做一个交换\n");	//两数交换必须由三个变量完成，可以想象为两杯水交换，必须要第三个杯子来做缓存才行
	int d = b;
	b = c;
	c = d;
	printf("中间值d=b=%d\n",d);
	printf("交换后的bc值：\n");
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	
	return 0;
}