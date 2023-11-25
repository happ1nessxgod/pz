#include <stdio.h>

int main() {

    float array[11] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10, 10.11};
    float* ptr_a;
    ptr_a = array;
    for (int i = 0; i < 11; ++i) {
        printf("Элемент %d: %f\n", i + 1, *ptr_a);
        ptr_a++;
    }
    printf("%p %p %p %p", ptr_a-2, ptr_a, array, &array[0]);

    return 0;
}
