#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	printf("������һ�����������ҽ��������������\n");
	scanf("%d",&a);
	int d = a;
	int e = a/10*10;
	printf("��������������");
	
	do
	{
		b = a%10;
		printf("%d",b);
		c = c*10+b;	//��һ���ڣ����������������ĩβ��0 
		a /= 10;
	}
	while ( a > 0 );
	printf("\n");
	
	if ( d==e )
	{
	printf("��%d�������ǰ����������Ԫ��0��\n",c);
	}
	
	return 0;
} 
