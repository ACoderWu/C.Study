#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
	srand(time(0));
	int a = rand()%100;
	int b = 0;
	int count = 0;
	
	printf("���������һ��С��99����Ȼ�����͵���������~\n");
	do
	{
		printf("��������µ�����\n");
		scanf("%d",&b);
		count++;
		if ( a<b )
		{
			printf("��µ���ƫ��\n");
		}
		else if ( a>b )
		{
			printf("��µ���ƫС\n");
		}
	}
	while ( a != b );
	printf("��ϲ��¶��ˣ�������%d��������%d�β���\n",a,count);
	MessageBoxA(0,"��л��Ĳ���","��л",1);
	
	return 0;
}
