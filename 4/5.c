#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#define ROWS 4 
#define COLS 4

int hasBalancedColumn(int arr[ROWS][COLS]) {
    for (int j = 0; j < COLS; j++) {
        int positiveCount = 0;
        int negativeCount = 0;
        for (int i = 0; i < ROWS; i++) {
            if (arr[i][j] > 0) {
                positiveCount++;
            }
            else if (arr[i][j] < 0) {
                negativeCount++;
            }
        }
        if (positiveCount == negativeCount) {
            return 1;
        }
    }
    return 0;
}
int main() {
    setlocale(LC_ALL, "Rus");   
    int array[ROWS][COLS] = {
        {1, -2, 3, 4},
        {-5, 6, -7, 8},
        {9, 10, -11, 12},
        {-4, 10, -11, 12}
    };
    if (hasBalancedColumn(array)) {
        printf("есть столбец с равным количеством положительных и отрицательных элементов.\n");
    }
    else {
        printf("нет столбца с равным количеством положительных и отрицательных элементов.\n");
    }
    return 0;
}
