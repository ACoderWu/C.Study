#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d",&a);
    int b = 0;
    b = a%10;
    int c = 0;
    c = a/10;
    int d = 0;
    d = c%10;
    int e = 0;
    e = c/10;
    int f = 0;
    f = b*100+d*10+e;
    printf("%d",f);
	
	return 0;
}