#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // malloc, free 사용을 위한 라이브러리

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // 동적 메모리 할당
    int** A = (int**)malloc(N * sizeof(int*));
    int** B = (int**)malloc(N * sizeof(int*));

    for (int i = 0; i < N; i++) {
        A[i] = (int*)malloc(M * sizeof(int));
        B[i] = (int*)malloc(M * sizeof(int));
    }

    // 배열 A 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 배열 B 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // 두 배열을 더해서 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    // 동적 메모리 해제
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
    }
    free(A);
    free(B);

    return 0;
}
