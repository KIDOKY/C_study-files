#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 50000 // 결과를 저장할 배열 크기 (충분한 크기로 설정)

// 큰 수 곱셈을 수행하는 함수
void multiply(int result[], int* size, int num) {
    int carry = 0; // 올림수를 저장할 변수

    // 각 자리 숫자에 num을 곱하고 carry를 처리
    for (int i = 0; i < *size; i++) {
        int prod = result[i] * num + carry; // 현재 자리 계산
        result[i] = prod % 10; // 현재 자릿수 저장 (1의 자리 남김)
        carry = prod / 10; // 올림수 계산
    }

    // 남은 carry 처리 (자릿수가 늘어날 경우)
    while (carry) {
        result[(*size)++] = carry % 10; // 새로운 자릿수 추가
        carry /= 10;
    }
}

// 팩토리얼을 계산하는 함수
void factorial(int n) {
    int result[MAX]; // 결과를 저장할 배열 (자릿수별 저장)
    memset(result, 0, sizeof(result)); // 배열을 0으로 초기화
    result[0] = 1; // 초기값 1 설정 (0! = 1)
    int size = 1; // 현재 자릿수 (1의 자리부터 시작)

    // 2부터 N까지 곱셈 수행
    for (int i = 2; i <= n; i++) {
        multiply(result, &size, i);
    }

    // 결과 출력 (배열이 거꾸로 저장되었으므로 뒤에서부터 출력)
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}

// 메인 함수
int main() {
    int N;
    scanf("%d", &N); // 사용자 입력 받기
    factorial(N); // 팩토리얼 계산 및 출력
    return 0;
}