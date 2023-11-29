#include <stdio.h>
#include <locale.h>

void extractSecondaryDiagonal(int arr[][3], int n, int result[]) {
    for (int i = 0; i < n; ++i) {
        result[i] = arr[i][n - i - 1];
    }
}
int main() {
    setlocale(LC_ALL, "rus");
    const int n = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int result[3];
    printf("исходный массив:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    extractSecondaryDiagonal(arr, n, result);
    printf("\nодномерный массив из элементов побочной диагонали:\n");
    for (int i = 0; i < n; ++i) {
        printf("%5d", result[i]);
    }
    return 0;
}
