#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Russian");

    int x, y;
    printf("Введите значение x: ");
    while (1)
    {
        if (scanf("%i", &x) == 1)
        {
            if (getchar() != '\n')
            {
                printf("Некорректный ввод.\nВведите только одно значение: ");
                while (getchar() != '\n');
            }
            else
            {
                break;
            }
        }
        else
        {
            printf("Некорректный ввод.\nВведите без букв, только одно значение: ");
            while (getchar() != '\n');
        }
    }
    if (x > 0)
    {
        y = 2 * x - 10;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = abs(x) - 1;
    }
    printf("Значение функции при x(%i) = %i", x, y);
    return 0;
}
