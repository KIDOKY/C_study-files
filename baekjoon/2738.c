#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // malloc, free ����� ���� ���̺귯��

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // ���� �޸� �Ҵ�
    int** A = (int**)malloc(N * sizeof(int*));
    int** B = (int**)malloc(N * sizeof(int*));

    for (int i = 0; i < N; i++) {
        A[i] = (int*)malloc(M * sizeof(int));
        B[i] = (int*)malloc(M * sizeof(int));
    }

    // �迭 A �Է�
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // �迭 B �Է�
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // �� �迭�� ���ؼ� ���
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    // ���� �޸� ����
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
    }
    free(A);
    free(B);

    return 0;
}
