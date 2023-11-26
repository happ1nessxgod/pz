#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");
    FILE* f;
    char c;
    f = fopen("output.txt", "w");
    if (f == NULL) {
        printf("Не удалось открыть файл.\n");
        return 1;
    }
    printf("введите данные. нажмите esc для завершения ввода.\n");
    do {
        c = _getch();
        fputc(c, f);
        putchar(c);
    } while (c != 27);
    fclose(f);
    return 0;
}
