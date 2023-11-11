#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int raznica(int A, int B) {
    return A - B;
}

int roznitsya(int B, int A) {
    return B - A;
}

int main() {

    setlocale(LC_ALL, "Russian");

    int A, B, r, t;
    printf("Введите значение А: ");
    do
    {
        if (scanf("%d", &A) == 1)
        {
            break;
        }
        else
        {
            printf("Некорректный ввод, попробуйте еще раз ввести значение А: ");
            while (getchar() != '\n');
        }
    } while (scanf("%d", &A) == 1);

    printf("Введите значение B: ");
    do
    {
        if (scanf("%d", &B) == 1)
        {
            break;
        }
        else
        {
            printf("Некорректный ввод, попробуйте еще раз ввести значение B: ");
            while (getchar() != '\n');
        }
    } while (scanf("%d", &B) == 1);

    r = raznica(A, B);
    t = roznitsya(B, A);

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
