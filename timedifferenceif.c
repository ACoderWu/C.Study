#include <stdio.h>

int main()
{
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;
	
	printf("TPlease input the first time (Separated by Spaces between hours and minutes):\n");
	scanf("%d %d",&h1,&m1);
	printf("TPlease input the twice time (Separated by Spaces between hours and minutes):\n");
	scanf("%d %d",&h2,&m2);
	
	int h = h2-h1;
	int m = m2-m1;
	
	if (m < 0)
	{
		h--;
		m = m+60;
	}
	
	printf("The timedifference is %d hour %d minute.\n",h,m);
	
	return 0;
}
