#include <stdio.h>
#include <stdbool.h>

int main()
{
	int x = 0;
	_Bool prime = 1;
	int i = 0;
	
	scanf("%d",&x);
	
	for ( i = 2; i<=(x/2); i++)
	{
		if ( x%i==0 )
		{
			prime = 0;
			break;	//����������ֱ�������ж�
		}
	}
	if (x == 1)
	{
		printf("%d��������\n",x);
	}
	else if (prime == 1)
	{
		printf("%d������\n",x); 
	}
	else 
	{
		printf("%d��������\n",x);
	} 
	
	return 0;
}

