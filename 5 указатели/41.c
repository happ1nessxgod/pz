#include <stdio.h>

int main() {

    float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10 };
    float* ptr_a, ptr_b;
    ptr_a = &array;
    ptr_b = (&array[10] - &array);
    for (int i = 0; i < ptr_b; ++i) {
        printf("%d: %f\n", i + 1, *ptr_a);
        ptr_a++;
    }
    printf("%p %p %p", &array, &array[0], array);

    return 0;
}
