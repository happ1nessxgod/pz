#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int Prost(int x)
{
	if (x > 1)
	{
		for (int i = 2; i < x; i++)
			if (x % i == 0) {
				return 0;
			}
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("Введите число: ");
	scanf("%i", &x);
	if (Prost(x) == 0) {
		return 0;
	}
	else
	{
		return 1;
	}
}
