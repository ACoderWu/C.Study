#include <stdio.h>

int main()
{
	const int AMOUNT = 100;	const //������ǳ�������AMOUNT�ǳ���,ͨ������Ҫ�ô�дǿ��
	int price = 0;	//û��const������Ǳ���
	
	printf("��������(Ԫ):\n");
	scanf("%d",&price);	//scanf��""������ʲô�ͱ�������ʲô��������пո�Ҫ��������һ���ַ���
	
	int change = AMOUNT - price;	//int change = 100 - price;	�����100��ֱ����
	printf("����%dԪ��\n",change);
	
	return 0;
}
