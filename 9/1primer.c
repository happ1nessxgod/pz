#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int* p;
    int sum = 0, i, n;

    printf("Enter the length of the array:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for array length.\n");
        return 1;  // Вернуть код ошибки
    }

    p = (int*)malloc(n * sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Вернуть код ошибки
    }

    printf("Array and Sum:\n");

    for (i = 0; i < n; i++) {
        p[i] = rand() % 10 - 5;
        printf("p[%d] = %d\n", i, p[i]);
        sum += p[i];
    }

    printf("sum = %d\n", sum);

    free(p);

    printf("Click on Enter...\n");

    return 0;  // Вернуть успешный код завершения
}
