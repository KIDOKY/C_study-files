#define _CRT_SUCURE_NO_WARNING //scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main()
{
	int num1;
	
	scanf("%d", &num1); //�Է¹��� ���� ������ ����
	
	if (num1 == 10) //num1�� 10�̸�
	{
		printf("10�Դϴ�.\n"); //"10�Դϴ�."�� ���
	}
	
	if (num1 == 20) //num1�� 20�̸� 
	{
		printf("20�Դϴ�.\n"); //"20�Դϴ�."�� ���
	}
	
	return 0;
}
