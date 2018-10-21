/*定义一个链表结点*/

#include<stdio.h>
int main()
{
	typedef struct Node
	{
		ElemType data;	//数据域
		struct Node *Next;	//指针域	//Next是下一个指针变量名，可以换成别的
	} 
	Node;
	typedef struct Node *Linklist;	//定义一个当前结点的指针的别名
}