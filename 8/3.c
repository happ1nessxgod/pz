#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void qwe(int num) {
    int digits[10] = { 0 };

    if (num < 0) {
        num = -num;
    }

    do {
        int digit = num % 10;
        digits[digit]++;
        num /= 10;
    } while (num > 0);

    for (int i = 0; i < 10; i++) {
        if (digits[i] > 1) {
            printf("%d повторяется %d раз(а).\n", i, digits[i]);
        }
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    int array[3][3];

    printf("Введите элементы массива 3x3:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("результат:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("В ячейке [%d][%d] число %d:\n", i, j, array[i][j]);
            qwe(array[i][j]);
            printf("\n");
        }
    }
    return 0;
}
