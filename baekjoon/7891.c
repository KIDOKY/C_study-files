#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long n, a, b;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%ld %ld", &a, &b);	//long���� �����߱� ������ %ld�� ����.

		printf("%ld\n", a + b);
	}

	return 0;
}