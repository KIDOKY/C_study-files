#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s1[20];

    sprintf(s1, "Hello, %s", "world!");

    printf("%s\n", s1);

    return 0;
}