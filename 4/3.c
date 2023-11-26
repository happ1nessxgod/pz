#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h> 

int main(){
    setlocale(LC_ALL, "rus");
    int maxn = 0, num;
    FILE* file; 
    file = fopen("123888.txt", "w");
    fprintf(file, "111 222 333 444 555");
    fclose(file);
    file = fopen("123888.txt", "r");
    while (!feof(file)) {
        fscanf(file, "%d", &num);
        if (num > maxn){
            maxn = num;
        }
    }
    printf("максимальное число = %d \n", maxn);
    fclose(file);
    return 0;
}
