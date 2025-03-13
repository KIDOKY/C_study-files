#include <stdio.h>

int main() {
    char hex;
    int i, j;

    // 16진수를 입력 받음
    scanf("%c", &hex);

    // 입력된 16진수에 따라 구구단 출력
    if (hex >= 'A' && hex <= 'F') {
        for (i = 1; i <= 16; i++) {
            printf("%c x %X = %X\n", hex, i, (hex - '0') * i);
        }
    } else {
        printf("잘못된 입력입니다.");
    }

    return 0;
}