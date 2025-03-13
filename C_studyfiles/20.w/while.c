#include <stdio.h>

int main() {
    int i = 0;

    printf("Hello, world! %d\n", i);
    i++;

    while(i < 100)
    {
        printf("Hello, world! %d\n", i);
        i++;
    }

    return 0;
}