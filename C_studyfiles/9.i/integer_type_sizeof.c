#include <stdio.h>

int main()
{
	printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long),sizeof(long long));
	//1: sizeof�� char �ڷ����� ũ�⸦ ����, 2: sizeof�� short �ڷ����� ũ�⸦ ����, 4: sizeof�� int �ڷ����� ũ�⸦ ����,
	//4: sizeof�� long �ڷ����� ũ�⸦ ����, 8: sizeof�� long long �ڷ����� ũ�⸦ ���� 
	return 0;
}
