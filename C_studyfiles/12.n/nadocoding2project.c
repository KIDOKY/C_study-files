#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    // ������Ʈ
    // �������� �������� ������ �Լ� (���� �ۼ�)
    // �̸�? ����? ������? Ű? ���˸�?
    char name[256];
    printf("�̸��� ������? ");
    scanf("%s", name);

    int age;
    printf("�� ���̿���? ");
    scanf("%d", &age);

    float weight;
    printf("�����Դ� �� kg�̿���? ");
    scanf("%f", &weight);

    double height;
    printf("Ű�� �� cm �̿���? ");
    scanf("%lf", &height);

    char what[256];
    printf("���� ���˸� ���������? ");
    scanf("%s", what);

    // ���� ���� �Է�
    printf("\n\n--- ������ ���� ---\n\n");
    printf("�̸�        : %s\n", name);
    printf("����        : %d\n", age);
    printf("������      : %.2f\n", weight);
    printf("Ű          : %.2lf\n", height);
    printf("����        : %s\n", what);

    return 0;
}