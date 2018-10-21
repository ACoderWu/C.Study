#include <stdio.h>

int main()
{
	int a = 10;
	int b = 3;
	double c = 3.0;
	
	float d = a/c*b;
	float e = a/b*c;
	
	printf("%f\n",d);	//如果此处是%d\n的话，输出的值是0，一个垃圾值。
	printf("%f\n",e);
	
	return 0;
}
