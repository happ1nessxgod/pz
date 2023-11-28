#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A[5], i;
	printf("Введите 5 элементов массива:\n");
	for (i = 0; i < 5; i++) {
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%d ",(A[i])*2);
	}
	return 0;
}
