#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	
	printf("������һ����a\n");
	scanf("%d",&a);
	
	if (a<0 && a>-100)
	{
		b = -1;
	}
	else if (a>0 && a<100)
	{
		b = 1;
	}
	else if (a=0)
	{
		b = 0;
	}
	else
	{
		b = 2;
	}
	
	switch (b)
	{
		case (-1):
			printf("a<0\n");	//���case�����û��break�ϵ��β����ô�����������һ��case��ȥ�� 
		case (0):
			printf("a=0\n");
			break;
		case (1):
			printf("a>0\n");
			break; 
		default:	//default������Բ����κ���䡣��Ҫʡ��default�� 
			printf("������Χ\n");
			break;
	}
	
	return 0;
}

