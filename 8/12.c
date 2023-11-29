#include <stdio.h>
#include <locale.h>

int isMagicSquare(int arr[][3], int n) {
    int sum = 0;
    for (int j = 0; j < n; ++j) {
        sum += arr[0][j];
    }
    for (int i = 1; i < n; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += arr[i][j];
        }
        if (rowSum != sum) {
            return 0;
        }
    }
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < n; ++i) {
            colSum += arr[i][j];
        }
        if (colSum != sum) {
            return 0;
        }
    }
    int diagSum1 = 0;
    for (int i = 0; i < n; ++i) {
        diagSum1 += arr[i][i];
    }
    int diagSum2 = 0;
    for (int i = 0; i < n; ++i) {
        diagSum2 += arr[i][n - i - 1];
    }
    return diagSum1 == sum && diagSum2 == sum;
}
int main() {
    setlocale(LC_ALL, "rus");
    const int n = 3;
    int arr[3][3] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };
    if (isMagicSquare(arr, n)) {
        printf("массив является магическим квадратом.\n");
    }
    else {
        printf("массив не является магическим квадратом.\n");
    }
    return 0;
}
