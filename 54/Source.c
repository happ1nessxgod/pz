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

    printf("������� �������� �: ");
    while ((C = scanf("%d", &A) != 1) || getchar() != '\n') 
    {
        while (getchar() != '\n');
        printf("������������ ����, ���������� ��� ��� ������ �������� � : ");
    }

    printf("������� �������� B: ");
    while ((C = scanf("%d", &B)) != 1 || getchar() != '\n') 
    {
        while (getchar() != '\n');
        printf("������������ ����, ���������� ��� ��� ������ �������� B :");
    }

    r = raznica(A, B);
    t = roznitsya(B, A);

    if (A > B)
    {
        printf("����� � = %d ������, ��� ����� B = %d �� %i\a", A, B, r);
    }
    else
    {
        printf("����� B = %d ������, ��� ����� A = %d �� %i\a", B, A, t);
    }
    return 0;
}