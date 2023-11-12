#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");

    int cardNumber;

    printf("Введите порядковый номер карты (от 6 до 14): ");
    scanf("%d", &cardNumber);

    switch (cardNumber) {
    case 6:
        printf("Шестерка\n");
        break;
    case 7:
        printf("Семерка\n");
        break;
    case 8:
        printf("Восьмерка\n");
        break;
    case 9:
        printf("Девятка\n");
        break;
    case 10:
        printf("Десятка\n");
        break;
    case 11:
        printf("Валет\n");
        break;
    case 12:
        printf("Дама\n");
        break;
    case 13:
        printf("Король\n");
        break;
    case 14:
        printf("Туз\n");
        break;
    default:
        printf("Некорректный номер карты\n");
        break;
    }

    return 0;
}
