#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h> 

int main() {
    setlocale(LC_ALL, "rus");
    FILE* file;
    int count = 1;
    int ch;   
    int lastChar = EOF;
    file = fopen("example.txt", "w");
    fprintf(file, "111 222 333 444 555\n88");
    fclose(file);
    file = fopen("example.txt", "r");
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            if (lastChar != EOF) {
                count++;
            }
        }
        lastChar = ch;
    }
    fclose(file);
    printf("Количество строк в файле: %d\n", count);
    return 0;
}
