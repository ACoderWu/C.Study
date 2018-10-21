#include <stdio.h>

//高精度除法器，可以算到小数点后1000位

int i = 0;  //全局变量

void xiaoshuwei(int a, int b);  //函数声明

int main()
{

    int a = 0;  //局部变量/本地变量/自动变量（生存期是自动的），作用域是局部的，只在只在它所在的{}代码块里起作用
    int b = 0;
    scanf("%d/%d",&a,&b);
    printf("0.");
    xiaoshuwei(a,b);
    printf("\n");

	return 0;
}

void xiaoshuwei(int c, int d)
{
    for(i=0; i<1000 ;i++)
    {
        int a = 0;  //局部变量，不同块里可以定义名称一样的变量，块里面的变量会覆盖掉块外面的同名变量，不同的非嵌套块里的变量不会相互作用
        a = c*10/d;
        printf("%d",a);
        c = c*10%d;
        if(c==0)
        {
            break;
        }
    }
    return;
}