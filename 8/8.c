#include <stdio.h>

void swapElements(int arr[][5], int rows, int cols) {
    for (int j = 0; j < cols; ++j) {
        int index_first_negative = -1;
        int index_last_zero = -1;
        for (int i = 0; i < rows; ++i) {
            if (arr[i][j] < 0 && index_first_negative == -1) {
                index_first_negative = i;
            }
            if (arr[i][j] == 0) {
                index_last_zero = i;
            }
        }
        if (index_first_negative != -1 && index_last_zero != -1) {
            int temp = arr[index_first_negative][j];
            arr[index_first_negative][j] = arr[index_last_zero][j];
            arr[index_last_zero][j] = temp;
        }
    }
}
int main() {
    const int rows = 4, cols = 5;
    int arr[4][5] = {
        {-1,  2,  3,  4,  5},
        {-6, 7,  8,  9,  10},
        {11, 12, 0,  14, 15},
        {0, -17, 18, 19, 20}
    };
    printf("исходный массив:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    swapElements(arr, rows, cols);
    printf("\nмассив после замены элементов:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
