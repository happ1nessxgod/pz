#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void NOD(int x, int y)
{
	int min, max;
	min = x > y ? y : x;
	max = x > y ? x : y;

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
