#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 50000 // ����� ������ �迭 ũ�� (����� ũ��� ����)

// ū �� ������ �����ϴ� �Լ�
void multiply(int result[], int* size, int num) {
    int carry = 0; // �ø����� ������ ����

    // �� �ڸ� ���ڿ� num�� ���ϰ� carry�� ó��
    for (int i = 0; i < *size; i++) {
        int prod = result[i] * num + carry; // ���� �ڸ� ���
        result[i] = prod % 10; // ���� �ڸ��� ���� (1�� �ڸ� ����)
        carry = prod / 10; // �ø��� ���
    }

    // ���� carry ó�� (�ڸ����� �þ ���)
    while (carry) {
        result[(*size)++] = carry % 10; // ���ο� �ڸ��� �߰�
        carry /= 10;
    }
}

// ���丮���� ����ϴ� �Լ�
void factorial(int n) {
    int result[MAX]; // ����� ������ �迭 (�ڸ����� ����)
    memset(result, 0, sizeof(result)); // �迭�� 0���� �ʱ�ȭ
    result[0] = 1; // �ʱⰪ 1 ���� (0! = 1)
    int size = 1; // ���� �ڸ��� (1�� �ڸ����� ����)

    // 2���� N���� ���� ����
    for (int i = 2; i <= n; i++) {
        multiply(result, &size, i);
    }

    // ��� ��� (�迭�� �Ųٷ� ����Ǿ����Ƿ� �ڿ������� ���)
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}

// ���� �Լ�
int main() {
    int N;
    scanf("%d", &N); // ����� �Է� �ޱ�
    factorial(N); // ���丮�� ��� �� ���
    return 0;
}