#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");
	int max, max1, max2, sum, sum1, sum2;
	max = max1 = max2 = sum = sum1 = sum2 = 0;
	int ap[3][3];
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &ap[i][j]);
		}

	}
	for (j = 0; j < 3; j++) {
		if (ap[0][j] > max) {
			max = ap[0][j];
		}		
		if (ap[1][j] > max1) {
			max1 = ap[1][j];
		}
		if (ap[2][j] > max2) {
			max2 = ap[2][j];
		}
	}
	for (j = 0; j < 3; j++) {
		if (ap[0][j] < max) {
			sum += ap[0][j];
		}
		if (ap[1][j] < max1) {
			sum1 += ap[1][j];
		}
		if (ap[2][j] < max2) {
			sum2 += ap[2][j];
		}
	}
	printf("сумма первой строки = %d\n", sum);
	printf("сумма второй строки = %d\n", sum1);
	printf("сумма третьей строки = %d\n", sum2);
	return 0;
}
