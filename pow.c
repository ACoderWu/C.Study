#include <stdio.h>
#include <math.h>
#include <windows.h>
 
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d",&a);
	b = pow(a,2);
	printf("%d\n",b);
	if (b < 100)
	{
		MessageBoxA(0,"����ĩ����","������",1);
	}
	else
		MessageBoxA(0,"ʥ�˵�����","������",1);
	
	return 0;
} 
