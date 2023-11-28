#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

#define ROWS 3
#define COLS 4

int findMaxRow(int arr[ROWS][COLS], int a) {
    int maxRow = -1;
    for (int i = 0; i < ROWS; i++) {
        int isMultiple = 1;
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] % a != 0) {
                isMultiple = 0;
                break;
            }
        }
        if (isMultiple) {
            maxRow = i;
        }
    }
    return maxRow;
}
int main() {
    setlocale(LC_ALL, "rus");
    int array[ROWS][COLS] = {
        {3, 6, 9, 12},
        {2, 4, 6, 8},
        {5, 10, 15, 20}
    };
    int a = 3;
    int result = findMaxRow(array, a);
    if (result != -1) {
        printf("максимальный номер строки, где все элементы кратны %d: %d\n", a, result);
    }
    else {
        printf("нет строки, где все элементы кратны %d\n", a);
    }
    return 0;
}
