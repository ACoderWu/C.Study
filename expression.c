#include <stdio.h>

int main()
{
	int a = 0;	//����һ�����ʽ��expression
	int b = 3;
	int c = 10 + (a=b);	//This is a expression too, �����c��10��a��b�������ӣ�+��=�����������
	/*C�����С�=����һ�����㣨��������������ʽһ��ʽ���ұ����滹��һ����=���Ľ�Ƕ��ʽ��ֵ���ɶ��Բ����ά�����������׳������ᳫ����д*/
	
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	
	printf("��bc��һ������\n");	//������������������������ɣ���������Ϊ����ˮ����������Ҫ���������������������
	int d = b;
	b = c;
	c = d;
	printf("�м�ֵd=b=%d\n",d);
	printf("�������bcֵ��\n");
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	
	return 0;
}