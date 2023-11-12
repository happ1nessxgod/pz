#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "rus");

    int N, K;

    printf("Введите число N и К через пробел: ");
    scanf("%d %d", &N, &K);

    if (K == 0) {
        printf("Ошибка: деление на ноль.\n");
    }
    else {
        if (N % K == 0) {
            printf("%d является кратным числу %d\n", N, K);
        }
        else {
            printf("%d не является кратным числу %d\n", N, K);
        }
    }
    return 0;
}
