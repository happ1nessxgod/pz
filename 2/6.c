#include <stdio.h>

int main() {
    const int size = 10;  // предполагаем, что у вас матрица 10x10 (можете изменить размер по своему усмотрению)
    
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i > j) {
                printf("%2d ", i * size + j);  // или любой другой способ генерации чисел в пределах 0-99
            } else {
                printf("   ");  // просто для выравнивания
            }
        }
        printf("\n");
    }

    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------

  
