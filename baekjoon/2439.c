#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;

    // 사용자로부터 정수 n을 입력받음
    scanf("%d", &n);

    // i는 1부터 n까지 반복 (행을 출력)
    for (int i = 1; i <= n; i++) {
        // j는 1부터 n-i까지 반복 (공백을 출력)
        // 각 행에서 별이 출력되기 전에 공백을 출력해야 하므로 공백을 출력하는 반복문
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // k는 1부터 i까지 반복 (별을 출력)
        // 현재 행에서 출력할 별의 개수는 i개
        for (int k = 1; k <= i; k++) {
            printf("*");
        }

        // 한 행을 모두 출력한 후 줄바꿈
        printf("\n");
    }

    return 0;
}