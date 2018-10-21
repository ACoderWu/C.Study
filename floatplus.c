#include <stdio.h>

int main()
{
	float a = 0;	//定义一个单精度变量 
	float b = 0;
	double c = 0;	//定义一个双精度变量 
	double d = 0; 
	
	printf("Please input 2 decimal, space division\n");
	
	scanf("%f %f",&a,&b);	//scanf函数中单精度变量用 %f ，如果换成 %lf 会出现垃圾值 
	float e = a+b;
	printf("The sum is %f\n",e);
	
	scanf("%lf %lf",&c,&d);	//scanf函数中双精度变量用 %lf ，如果换成 %f 可能会出现垃圾值 ，此处f的意思是long，长整型。 
	double f = a+b;
	printf("The sum is %f\n",f);
	
	return 0;
}
