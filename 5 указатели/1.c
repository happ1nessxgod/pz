#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");
    char* ad;
    int* ab;
    double* as; 

    printf("размер int указателя: %lu байтов\n", sizeof(ab));
    printf("размер char указателя: %lu байтов\n", sizeof(ad));
    printf("размер double указателя: %lu байтов\n", sizeof(as));
    return 0;
}
