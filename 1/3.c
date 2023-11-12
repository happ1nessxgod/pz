#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	long long A, B, C;

	printf("Программа для определения максимального числа. Введите три целых числа: ");

	while (1)
	{
		if (scanf("%lli %lli %lli", &A, &B, &C) == 3)
		{
			if (getchar() != '\n')
			{
				printf("Некорректный ввод. Введите три целых числа еще раз: ");
				while (getchar() != '\n');
			}
			else
			{
				break;
			}
		}
		else
		{
			printf("Некорректный ввод. Введите три целых числа еще раз: ");
			while (getchar() != '\n');
		}
	}
	long long r = fmax(fmax(A, B), C);
	printf("\nМаксимальное число из них : \n%lli\n\a", r);
	return 0;
}
