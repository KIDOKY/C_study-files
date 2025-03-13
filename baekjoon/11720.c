#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // malloc을 사용하기 위해 필요

int main() {
    int n, sum = 0;

    // 사용자로부터 숫자 n을 입력받음 (문자열의 길이)
    scanf("%d", &n);

    // num 배열을 동적으로 할당
    // n 개의 문자 크기를 저장할 메모리를 할당 (사용자가 입력한 길이에 맞춤)
    char* num = (char*)malloc((n + 1) * sizeof(char)); // n+1 크기 (null 문자를 포함)

    // 사용자로부터 문자열을 입력받음 (문자열의 길이는 n)
    scanf("%s", num);

    // 각 문자(char)를 숫자로 변환하여 합산
    for (int i = 0; i < n; i++) {
        sum += num[i] - '0';  // '0'을 빼면 그 문자의 숫자 값이 됨
    }

    // 모든 숫자의 합을 출력
    printf("%d", sum);

    // 동적으로 할당된 메모리 해제
    free(num);

    return 0;  // 프로그램 종료
}