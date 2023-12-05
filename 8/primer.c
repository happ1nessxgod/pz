#define _CRT_SECURE_NO_WARNINGS12
#define SIZE 10
#define MAX_LENGTH 128
#include <stdio.h>
#include <stdlib.h>


int main() {
    char words[SIZE][MAX_LENGTH];
    unsigned i, j, n, maxLength;
    printf("Enter the number of words (indexes <= 10):\n");

    if (scanf("%d", &n) != 1 || n <= 0 || n > SIZE) {
        printf("Invalid input. Please enter a number between 1 and 10.\n");
        return 1;
    }

    while (getchar() != '\n');

    unsigned char counter[SIZE];

    for (i = 0; i < n; i++) {
        printf("Enter word %d:\n", i + 1);
      
        if (scanf("%127s", words[i]) != 1) {
            printf("Error reading word.\n");
            return 1;
        }
        counter[i] = strlen(words[i]);
    }

    maxLength = counter[0];
    j = 0;
    for (i = 1; i < n; i++) {
        if (counter[i] > maxLength) {
            maxLength = counter[i];
            j = i;
        }
    }

    printf("Max word:\n");
    printf("%s\n", words[j]);

    return 0;  // Вернуть успешный код завершения
}
