#include <stdio.h>

void rt(void* ptr, size_t size) {
    unsigned char* a = (unsigned char*)ptr;
    for (size_t i = 0; i < size; ++i) {
        printf("%x ", a[i]);
    }
    printf("\n");
}

void main(void) {
    int x = 1000;
    char c = 'A';
    double y = 1.337;
    rt(&x, sizeof(x));
    rt(&y, sizeof(y));
    rt(&c, sizeof(c));
    return 0;
}
