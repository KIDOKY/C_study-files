#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int gender;
    int age;
    bool isOwner;

    scanf("%d %d %d", &gender, &age, &isOwner);

    printf("�ȳ��ϼ���.\n");
    printf("���� ����.\n");

    if(gender == 2)
    {
        printf("�ȳ����輼��.\n");
        printf("���� �ݴ´�.\n");
        return 0;
    }

    if(age < 30)
    {
        printf("�ȳ����輼��.\n");
        printf("���� �ݴ´�.\n");
        return 0;
    }
    if(isOwner == false)
    {
        printf("�ȳ����輼��.\n");
        printf("���� �ݴ´�.\n");
        return 0;
    }
}