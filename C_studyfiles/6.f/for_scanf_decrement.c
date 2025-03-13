#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);

    for(int i = count; i > 0; i--)
    {
        printf("Hello, world! %d\n", i);
    }

    return 0;
}