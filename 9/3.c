#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3;
    int m = 4;
    int** a = (int**)malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) {
        a[i] = (int*)malloc(m * sizeof(int));
    }

    int something = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = something;
            something++;
        }
    }

    int rowIndex = 1;
    int sum = 0;

    for (int j = 0; j < m; j++) {
        sum += a[rowIndex][j];
    }

    printf("Сумма элементов строки %d: %d\n", rowIndex, sum);

    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}
