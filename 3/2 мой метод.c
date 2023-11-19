#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

void NOD(int x, int y)
{
	int min, max;
	if (x > y) {
		max = x;
		min = y;
	}
	else
	{
		max = y;
		min = x;
	}

	if (max % min == 0) {
		printf("Общий делитель: %i", min);
	}
	else
	{
		for (int i = min; i > 1; --i)
			if (max % i == 0 && min % i == 0) {
				printf("Общий делитель: %i", i);
				break;
			}
		printf("Нет делителя");
	}
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
