#include <stdio.h>

int main()
{
	int x = 0;
	int i = 0, j = 0;
	for (; x != -1;)
	{
		scanf("%d",&x);
		if ( x%2 == 1 )
		{
			i++;
		}
		else if ( x%2 == 0 )
		{
			j++;
		}
	}
	
	printf("%d %d",i,j);
	
	return 0;
}