#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    int userInput;
    setlocale(LC_ALL, "rus");

    printf("Введите целое число: ");
    scanf("%d", &userInput);

    if (userInput % 2 == 0) {
        printf("%d - четное число.\n", userInput);
    }
    else {
        printf("%d - нечетное число.\n", userInput);
    }

    return 0;
}
