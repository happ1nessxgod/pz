#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

void summa(int x)
{
	int sum = 0;
	while (x > 0) {
		sum += x % 10;
		x /= 10;
	}
	printf("Сумма цифр равна %i", sum);
}
int main()
{
	setlocale(LC_ALL, "Russian");

	int x;
	printf("Введите число: ");
	scanf("%i", &x);
	summa(x);
	return 0;
}
