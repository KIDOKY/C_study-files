#define _CRT_SECURE_NO_WARNINGS //scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main()
{
	int num1, num2;
	
	printf("������ 2�� �Է��ϼ���: ");
	scanf("%d %d", &num1,&num2); //���� 2�� �Է¹޾Ƽ� ���� 2���� ����
	
	printf("%d %d\n", num1, num2); //������ ������ ���
	
	return 0; 
}
