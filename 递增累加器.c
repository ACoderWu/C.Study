#include <stdio.h>

int sum(int begin, int end);

int main()
{
    int a = 0;
    int b = 0;
	int s = 0;

    scanf("%d",&a);
	scanf("%d",&b);
    s = sum(a,b);
    printf("%d",s);

    return 0;
}

int sum(int begin, int end)
{
	int i = 0;
	int sum = 0;
	for(i = begin; i <= end; i++)
	{
		sum += i;
	}
	return sum;
}