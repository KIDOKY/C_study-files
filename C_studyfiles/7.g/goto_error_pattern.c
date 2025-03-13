#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int gender;
    int age;
    bool isOwner;

    scanf("%d %d %d", &gender, &age, &isOwner);

    printf("안녕하세요.\n");
    printf("문을 연다.\n");

    if(gender == 2)
        goto EXIT;

    if(age < 30)
        goto EXIT;
    if(isOwner == false)
        goto EXIT;

EXIT:
    printf("안녕히계세요.\n");
    printf("문을 닫는다.\n");

    return 0;
}