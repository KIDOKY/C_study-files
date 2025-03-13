#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);

    for(; count > 0; count--)
    {
        printf("Hello, world! %d\n", count);
    }

    return 0;
}