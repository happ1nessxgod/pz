#include<stdlib.h>
#include<time.h>
#include <stdio.h>
void main()
{
	int** matr;
	int n, i, j, sled = 1;
	printf("Enter n:\n");
	scanf("%d", &n);
	matr = (int*)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++)
		matr[i] = (int*)malloc(n * sizeof(int));
	/* заполним матрицу случайными числами */
	srand(time(0));
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			matr[i][j] = rand() % 10;
			printf("matr[%d][%d] = %d%d\n", i, j, matr[i][j]);
		}
	for (i = 0; i < n; i++)
		sled *= matr[i][i];
	printf("sled = %d\n", sled);

	free(matr); // освобождения выделенной памяти
	printf("Click on Enter...");
	getch();
}
