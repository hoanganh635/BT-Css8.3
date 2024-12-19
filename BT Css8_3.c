#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao mot so nguyen duong (kich thuoc ma tran): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Kich thuoc ma tran phai la so nguyen duong.\n");
        return 1;
    }

    int matrix[n][n];
    printf("Nhap gia tri cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu tai hang %d, cot %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}