#include <stdio.h>
#include <locale.h>
int countElementsEndingWithA(int arr[], int size, int a) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        int lastDigit = arr[i] % 10;
        if (lastDigit == a) {
            count++;
        }
    }
    return count;
}
int main() {
    const int rows = 3;
    const int cols = 4;
    const int a = 5;
    int arr[3][4] = {
        {15, 25, 35, 45},
        {55, 62, 73, 84},
        {97, 108, 119, 120}
    };
    for (int i = 0; i < rows; ++i) {
        int count = countElementsEndingWithA(arr[i], cols, a);
        printf("в строке %d количество элементов, последняя цифра которых равна %d: %d\n", i + 1, a, count);
    }
    return 0;
}
