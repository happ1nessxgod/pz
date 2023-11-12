#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "Russian");

    int x, y;
    char input[100];
    printf("Введите значение x: ");
    while (1)
    {
        while (1)
        {
            if (scanf("%s", input) == 1)
            {
                if (strcmp(input, "exit") == 0)
                {
                    printf("\nВыход из программы\n");
                    return 0;
                }
                else
                {
                    if (sscanf(input, "%i", &x) == 1)
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
    printf("Значение функции при x(%i) = %i\nЧтобы выйти из программы напишите exit\nИли введите следущее значение x :", x, y);
    }
}
