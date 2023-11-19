#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int NOD(int x, int y)
{
	if (y == 0)
	{
		printf("Нет делителя");
		return 0;
	}
	while (y != 0) {
		int ar = y;
		y = x % y;
		x = ar;
	}
	printf("%i", x);
	return 0;
}
int main()
{
	setlocale(LC_ALL, "Russian");

	int x, y;
	printf("Введите 2 числа: ");
	scanf("%i %i", &x, &y);
	NOD(x, y);
	return 0;
}
