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
		MessageBoxA(0,"世界末日了","天哪噜",1);
	}
	else
		MessageBoxA(0,"圣人诞生了","天哪噜",1);
	
	return 0;
} 
