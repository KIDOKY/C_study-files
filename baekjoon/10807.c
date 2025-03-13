#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, count = 0;
	int find_num;
	int input_num[100];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d ", &input_num[i]);
	}

	scanf("%d", &find_num);

	for (int j = 0; j < num; j++) {
		if (find_num == input_num[j]) {
			count++;
		}
	}

	printf("%d", count);

	return 0;
}