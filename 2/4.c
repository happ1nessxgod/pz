#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "russian");

	int x, s;
	printf("Введите число: ");
	scanf("%i", &x);
	for (s = 0; x > 0; --x)
		s += x;
	printf("\nСумма = %i", s);
	return 0;
}
