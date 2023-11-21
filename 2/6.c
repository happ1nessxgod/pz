#include <stdio.h>

int main() {
    const int size = 10; 
    
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i >= j) {
                printf("%2d ", i * size + j); 
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int ab = 10; 

    int x = 0;
    while (x < ab) {
        int s = 0;
        while (s < ab) {
            if (x >= s) {
                printf("%2d ", x * ab + s);
            }
            else {
                printf("   ");
            }
            ++s;
        }
        ++x;
        printf("\n");
    } 

    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int ab = 10; 

    int x = 0;
    do {
        int s = 0;
        do {
            if (x >= s) {
                printf("%2d ", x * ab + s);
            }
            else {
                printf("   ");
            }
            ++s;
        } while (s < ab);
        ++x;
        printf("\n");
    } while (x < ab);
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int ab = 10;  

    int x = 0;
    int s = 0;

qq:
    if (x >= ab) {
        goto end;
    }

    s = 0;

qw:
    if (s <= x) {
        printf("%2d ", x * ab + s);
        ++s;
        goto qw;
    }

    printf("\n");
    ++x;
    goto qq;

end:
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

void rcs(int x, int s, int ab) {
    if (x < ab) {
        if (s <= x) {
            printf("%2d ", x * ab + s);
            rcs(x, s + 1, ab);
        }
        else
        {
            printf("\n");
            rcs(x + 1, 0, ab);
        }
    }
}

int main() {
    rcs(0, 0, 10);
    return 0;
}
