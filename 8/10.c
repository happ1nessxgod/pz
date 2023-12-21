#include <stdio.h>
#include <locale.h>

void qwe(int arr[][4], int rows, int cols, int* mincol1, int* mincol2, int* minsum) {
    *minsum = -1;
    for (int j = 0; j < cols - 1; ++j) {
        int currentSum = 0;
        for (int i = 0; i < rows; ++i) {
            currentSum += arr[i][j] + arr[i][j + 1];
        }
        if (*minsum == -1 || currentSum < *minsum) {
            *minsum = currentSum;
            *mincol1 = j;
            *mincol2 = j + 1;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    const int rows = 3;
    const int cols = 4;
    int arr[3][4] = {
        {1, 2, -3, 4},
        {-5, 6, 7, 8},
        {-9, -10, 11, 12}
    };
    int mincol1, mincol2, minsum;
    qwe(arr, rows, cols, &mincol1, &mincol2, &minsum);

    minsum = 0;
    for (int i = 0; i < rows; ++i) {
        minsum += arr[i][mincol1] + arr[i][mincol2];
    }
    printf("номера двух соседних столбцов с минимальной суммой элементов: %d и %d\n", mincol1+1, mincol2+1);
    printf("минимальная сумма элементов: %d\n", minsum);
    return 0;
}
