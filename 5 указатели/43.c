#include <stdio.h>

int main() {

    float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10 };
    float* ptr_a;
    ptr_a = &array;
    for (; ptr_a < &array[10]; ++ptr_a) {
        printf("%f:\n", *ptr_a);
    }
    printf("%p %p", ptr_a-10, &array[0]);
    return 0;
}
