#include <stdio.h>

int main() {
    char hex;
    int i, j;

    // 16������ �Է� ����
    scanf("%c", &hex);

    // �Էµ� 16������ ���� ������ ���
    if (hex >= 'A' && hex <= 'F') {
        for (i = 1; i <= 16; i++) {
            printf("%c x %X = %X\n", hex, i, (hex - '0') * i);
        }
    } else {
        printf("�߸��� �Է��Դϴ�.");
    }

    return 0;
}