#include <stdio.h>
#include <locale.h>

void findMinSumColumns(int arr[][4], int rows, int cols, int* minCol1, int* minCol2) {
    int minSum = -1;
    for (int j = 0; j < cols - 1; ++j) {
        int currentSum = 0;
        for (int i = 0; i < rows; ++i) {
            currentSum += arr[i][j] + arr[i][j + 1];
        }
        if (minSum == -1 || currentSum < minSum) {
            minSum = currentSum;
            *minCol1 = j;
            *minCol2 = j + 1;
        }
    }
}
int main() {
    setlocale(LC_ALL, "RUS");
    const int rows = 3;
    const int cols = 4;
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int minCol1, minCol2;
    findMinSumColumns(arr, rows, cols, &minCol1, &minCol2);
    printf("номера двух соседних столбцов с минимальной суммой элементов: %d и %d\n", minCol1, minCol2);
    return 0;
}
