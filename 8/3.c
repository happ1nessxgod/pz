#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int i, j, count[9] = { 0 };
    int ap[3][3];
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("ap[%d][%d] = ", i, j);
            scanf("%d", &ap[i][j]);

            int index = i * 3 + j;
            ++count[index];
        }
    }
    printf("выберите элемент массива - \n\n");
    for (int k = 0; k < 9; ++k) {
        printf("%d - p[%d][%d]\n", k + 1, k / 3, k % 3);
    }
    int kj;
    scanf("%d", &kj);
    if (kj >= 1 && kj <= 9) {
        int row = (kj - 1) / 3;
        int col = (kj - 1) % 3;
        printf("колво знаков ""%d"" повторяется - %d раз", ap[row][col], count[kj - 1]);
    }
    else {
        printf("неверный выбор");
    }
    return 0;
}
