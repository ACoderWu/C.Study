//the code from https://hanxuedog.iteye.com/blog/1294499

#include<stdio.h>

int main(void)
{
	int num;
	int status;
	printf("input the value of num:");
	loop:
	status = scanf("%d",&num);
    if(status ==0)
	{
		printf("enter error");
        fflush(stdin);//清除输入缓冲区的错误数据 
	}
	else if(status == EOF)
	{
        printf("Input failure occurs!\n"); 
	}
	else
        printf("\nnum = %d\n",num);
	fflush(stdin);
	getchar();
	goto loop;
	 
	return 0;
}
