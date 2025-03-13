#include <stdio.h>

int main()
{
	printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long),sizeof(long long));
	//1: sizeof로 char 자료형의 크기를 구함, 2: sizeof로 short 자료형의 크기를 구함, 4: sizeof로 int 자료형의 크기를 구함,
	//4: sizeof로 long 자료형의 크기를 구함, 8: sizeof로 long long 자료형의 크기를 구함 
	return 0;
}
