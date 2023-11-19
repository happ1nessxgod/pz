#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>

float procent(char predloj[], char simvol) {
    int vsegosimv = strlen(predloj);
    int schetnashsimvl = 0;
    int cicle = 0;

    while (predloj[cicle] != '\0') {
        if (predloj[cicle] == simvol) {
            schetnashsimvl++;
        }
        cicle++;
    }

    if (vsegosimv == 0) {
        printf("Предложение не содержит символов");
        return 0;
    }

    float proce = (float)schetnashsimvl / vsegosimv * 100;
    printf("Доля символа '%c' является - %0.2f%%",simvol, proce);
    return 0;
}

int main() {
    setlocale(LC_ALL, "rus");
    char predloj[1000];
    char x;
    printf("Введите предложение: ");
    gets(predloj);

    printf("Введите символ для расчета доли: ");
    scanf(" %c", &x);

    float ax = procent(predloj, x);
    return 0;
}
