#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int celoe(int x) {
	if (x < 0) {
		return 0;
	}
	int num = (int)sqrt(x);
	if (num * num == x) {
		printf("%i - Число целое", x);
		return 0;
	}
	else
	{
		printf("%i - Число нецелое", x);
		return 0;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int x;
	printf("Введите число: ");
	scanf("%i", &x);
	celoe(x);
	return 0;
}
