#include <stdio.h>

int main()
{
	char c1 = 0x61; //a�� ASCII �ڵ� �� 0x61 �Ҵ�
	char c2 = 0x62; //b�� ASCII �ڵ� �� 0x62 �Ҵ�
	
	//char�� %c�� ����ϸ� ���ڰ� ��µǰ�, %d�� ����ϸ� �������� ��µ�
	//%x�� ����ϸ� 16������ ��µ�
	printf("%c, %d, 0x%x\n", c1, c1, c1); //a, 97, 0x61
	printf("%c, %d, 0x%x\n", c2, c2, c2); //b, 98, 0x61
	
	return 0;
}
