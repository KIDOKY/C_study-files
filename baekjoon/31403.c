#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int A, B, C;
	char a[5], b[5], c[5];

	while (1) {
		scanf("%d", &A);
		if (A >= 1 && A <= 1000) {
			break;
		}
		return 0;
	}
	while (1) {
		scanf("%d", &B);
		if (B >= 1 && B <= 1000) {
			break;
		}
		return 0;
	}
	while (1) {
		scanf("%d", &C);
		if (C >= 1 && C <= 1000) {
			break;
		}
		return 0;
	}

	sprintf(a, "%d", A);
	sprintf(b, "%d", B);
	sprintf(c, "%d", C);

	printf("%d\n", A + B - C);
	strcat(a, b);
	printf("%d\n", atoi(a) - atoi(c));

	return 0;
}