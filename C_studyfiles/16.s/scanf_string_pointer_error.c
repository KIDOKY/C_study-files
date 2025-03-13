#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char *s1 = "Hello";

    printf("문자열을 입력하세요: ");
    scanf("%s", s1);

    printf("%s\n", s1);

    return 0;
}