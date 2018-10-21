#include <stdio.h>

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	
	printf("Please input time1: hour1.minute1\n");
	scanf("%d.%d",&hour1,&minute1);
	printf("Please input time2: hour2.minute2\n");
	scanf("%d.%d",&hour2,&minute2);
	
	int t1 = hour1*60+minute1;	//小时转化成分钟是整数，整数运算是有好处的，分钟换小时是小数，所以不用分钟换小时
	int t2 = hour2*60+minute2;
	int t = t2-t1;
	
	printf("The time difference is : %d hour %d minute\n",t/60,t%60);	//整数除很粗暴的只取整数值，后面分钟部分就取余即可
	
	return 0;
}