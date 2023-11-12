#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");
    int height, actualWeight, optimalWeight;

    printf("Введите ваш рост в сантиметрах: ");
    scanf("%d", &height);

    printf("Введите ваш текущий вес в килограммах: ");
    scanf("%d", &actualWeight);

    optimalWeight = height - 100;

    printf("Оптимальный вес для вашего роста (%d см) составляет %d кг.\n", height, optimalWeight);

    if (actualWeight == optimalWeight) {
        printf("Ваш вес уже оптимальный. Отлично!\n");
    }
    else if (actualWeight < optimalWeight) {
        printf("Вам рекомендуется поправиться.\n");
    }
    else {
        printf("Вам рекомендуется похудеть.\n");
    }

    return 0;
}
