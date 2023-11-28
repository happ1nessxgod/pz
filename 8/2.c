#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int i, j;
    float sr = 0, m;
    int ap[3][3];
    int min_i = 0, min_j = 0;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("ap[%d][%d] = ", i, j);
            scanf("%d", &ap[i][j]);
            sr += (float)ap[i][j];
        }
    }
    sr = round(sr / 9);
    m = fabs(sr - (float)ap[0][0]);
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            float diff = fabs(sr - (float)ap[i][j]);
            if (diff < m) {
                m = diff;
                min_i = i;
                min_j = j;
            }
        }
    }
    printf("минимальное отклонение - %f\n", m);
    printf("координаты элемента - ap[%d][%d], значение которого = %d\n", min_i, min_j,\
    ap[min_i][min_j]);
    return 0;
}
