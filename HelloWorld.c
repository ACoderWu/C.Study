#include<stdio.h>	//printf函数的头文件
#include<Windows.h>	//MessageBoxA函数的头文件

int main()	//main函数现在的标准是int型的，不能写成void main
{
    printf("Hello C World!\n");	//输出内容
	MessageBoxA(0, "HELLO blueshell1949", "First C", 1);	//输出内容系统对话框，第四个参数变换按钮
	
    return 0;	//表示函数结束
}