#include <stdio.h>

int sumUpperQuarter(int arr[4][4]) {
    int n = 4;
    int sumUpper = 0;
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            if (i != j && i + j != n - 1) {
                sumUpper += arr[i][j];
            }
        }
    }
    return sumUpper;
}
int main() {
    int array[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int result = sumUpperQuarter(array);
    printf("сумма элементов верхней четверти: %d\n", result);
    return 0;
}
