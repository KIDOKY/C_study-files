#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // malloc�� ����ϱ� ���� �ʿ�

int main() {
    int n, sum = 0;

    // ����ڷκ��� ���� n�� �Է¹��� (���ڿ��� ����)
    scanf("%d", &n);

    // num �迭�� �������� �Ҵ�
    // n ���� ���� ũ�⸦ ������ �޸𸮸� �Ҵ� (����ڰ� �Է��� ���̿� ����)
    char* num = (char*)malloc((n + 1) * sizeof(char)); // n+1 ũ�� (null ���ڸ� ����)

    // ����ڷκ��� ���ڿ��� �Է¹��� (���ڿ��� ���̴� n)
    scanf("%s", num);

    // �� ����(char)�� ���ڷ� ��ȯ�Ͽ� �ջ�
    for (int i = 0; i < n; i++) {
        sum += num[i] - '0';  // '0'�� ���� �� ������ ���� ���� ��
    }

    // ��� ������ ���� ���
    printf("%d", sum);

    // �������� �Ҵ�� �޸� ����
    free(num);

    return 0;  // ���α׷� ����
}