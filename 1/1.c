#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int raznica(int A, int B) {
    return A - B;
}

int raznica1(int B, int A) {
    return B - A;
}

int main() {

    setlocale(LC_ALL, "Russian");

    int A, B, r, t;
    printf("Введите значение А: ");
    while (1)
    {
        if (scanf("%d", &A) == 1)
        {
            if (getchar() != '\n')
            {
                printf("Некорректный ввод, значение А должно состоять из десятичных цифр и без пробелов. \nВведите значение А: ");
                while (getchar() != '\n');
            }
            else
            {
                break;
            }
        }
        else
        {
            printf("Некорректный ввод, значение А принимает только целое значение, состоявшее из десятичных цифр. \nПопробуйте еще раз ввести значение А: ");
            while (getchar() != '\n');
        }
    }

    printf("Введите значение B: ");
    while (1)
    {
        if (scanf("%d", &B) == 1)
        {
            if (getchar() != '\n')
            {
                printf("Некорректный ввод, значение B должно состоять из десятичных цифр и без пробелов. \nВведите значение B: ");
                while (getchar() != '\n');
            }
            else
            {
                break;
            }
        }
        else
        {
            printf("Некорректный ввод, значение B принимает только целое значение, состоявшее из десятичных цифр. \nПопробуйте еще раз ввести значение B: ");
            while (getchar() != '\n');
        }
    }

    r = raznica(A, B);
    t = raznica1(B, A);

    if (A > B)
    {
        printf("Число A = %d больше, чем число B = %d на %i\n", A, B, r);
    }
    if (A == B)
    {
        printf("Число A = %d равен числу B = %d", A, B);
    }
    if (A < B)
    {
        printf("Число B = %d больше, чем число A = %d на %i\n", B, A, t);
    }
    return 0;
}
