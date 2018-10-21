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
			break;	//不是素数则直接跳出判断
		}
	}
	if (x == 1)
	{
		printf("%d不是素数\n",x);
	}
	else if (prime == 1)
	{
		printf("%d是素数\n",x); 
	}
	else 
	{
		printf("%d不是素数\n",x);
	} 
	
	return 0;
}

