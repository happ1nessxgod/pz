#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#define SIZE 3

int isSymmetric(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[i][j] != arr[j][i]) {
                return 0; 
            }
        }
    }
    return 1;
}
int main() {
    setlocale(LC_ALL, "RUS");
    int array[SIZE][SIZE] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    if (isSymmetric(array)) {
        printf("Массив симметричен относительно главной диагонали.\n");
    }
    else {
        printf("Массив не симметричен относительно главной диагонали.\n");
    }
    return 0;
}
