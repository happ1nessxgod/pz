#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int n = 4;
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

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                sum += a[i][j];
            }
        }
    }
    printf("сумма элементов главной диагонали: %d\n", sum);
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}
