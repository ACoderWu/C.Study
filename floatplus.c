#include <stdio.h>

int main()
{
	float a = 0;	//����һ�������ȱ��� 
	float b = 0;
	double c = 0;	//����һ��˫���ȱ��� 
	double d = 0; 
	
	printf("Please input 2 decimal, space division\n");
	
	scanf("%f %f",&a,&b);	//scanf�����е����ȱ����� %f ��������� %lf ���������ֵ 
	float e = a+b;
	printf("The sum is %f\n",e);
	
	scanf("%lf %lf",&c,&d);	//scanf������˫���ȱ����� %lf ��������� %f ���ܻ��������ֵ ���˴�f����˼��long�������͡� 
	double f = a+b;
	printf("The sum is %f\n",f);
	
	return 0;
}
