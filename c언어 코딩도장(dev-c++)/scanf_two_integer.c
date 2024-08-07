#define _CRT_SECURE_NO_WARNINGS //scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
	int num1, num2;
	
	printf("정수를 2개 입력하세요: ");
	scanf("%d %d", &num1,&num2); //값을 2개 입력받아서 변수 2개에 저장
	
	printf("%d %d\n", num1, num2); //변수의 내용을 출력
	
	return 0; 
}
