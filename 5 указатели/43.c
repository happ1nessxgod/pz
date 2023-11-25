#include <stdio.h>

int main() {

    float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10 };
    float* ptr_a;
    float* ptr_b;
    ptr_a = &array[0];
    ptr_b = &array[10];
    for (; ptr_a < ptr_b ; ++ptr_a) {
        printf("Элемент %f:\n", *ptr_a);
    }

    return 0;
}
