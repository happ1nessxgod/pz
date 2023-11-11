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

    int A, B, C, r, t;

    printf("Введите значение А: ");
    while ((C = scanf("%d", &A) != 1) || getchar() != '\n') 
    {
        while (getchar() != '\n');
        printf("Некорректный ввод, попробуйте еще раз ввести значение А : ");
    }

    printf("Введите значение B: ");
    while ((C = scanf("%d", &B)) != 1 || getchar() != '\n') 
    {
        while (getchar() != '\n');
        printf("Некорректный ввод, попробуйте еще раз ввести значение B :");
    }

    r = raznica(A, B);
    t = roznitsya(B, A);

    if (A > B)
    {
        printf("Число А = %d больше, чем число B = %d на %i\a", A, B, r);
    }
    else
    {
        printf("Число B = %d больше, чем число A = %d на %i\a", B, A, t);
    }
    return 0;
}
