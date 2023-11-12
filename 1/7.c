#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "rus");
    int correctYear = 1703;

    int userAnswer;
    printf("В каком году был основан Санкт-Петербург?\nВведите число : ");
    scanf("%d", &userAnswer);
    switch (userAnswer)
    {
        case 1703: printf("Верно! Санкт - Петербург был основан в 1703 году");
            break;
        default:
            printf("Вы ошиблись, Санкт-Петербург был основан в 1703 году.");
            break;
    }
    return 0;
}
