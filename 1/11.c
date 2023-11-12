#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");
    int vehicleType;

    printf("Введите цифру транспортного средства (1 - автомобиль, 2 - велосипед, 3 - мотоцикл, 4 - самолет, 5 - поезд): ");
    scanf("%d", &vehicleType);

    switch (vehicleType) {
    case 1:
        printf("Максимальная скорость автомобиля: 150 км/ч\n");
        break;
    case 2:
        printf("Максимальная скорость велосипеда: 30 км/ч\n");
        break;
    case 3:
        printf("Максимальная скорость мотоцикла: 200 км/ч\n");
        break;
    case 4:
        printf("Максимальная скорость самолета: 900 км/ч\n");
        break;
    case 5:
        printf("Максимальная скорость поезда: 300 км/ч\n");
        break;
    default:
        printf("Некорректная буква транспортного средства\n");
    }
    return 0;
}
