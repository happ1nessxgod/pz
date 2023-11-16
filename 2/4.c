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

------------------------------------------------------------------------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "russian");

	int x, s;
	s = 0;
	printf("Введите число: ");
	scanf("%i", &x);
	while (x > 0) {
		s += x;
		--x;
	}
	printf("Сумма = %i", s);
	return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "russian");

	int x, s;
	s = 0;
	printf("Введите число: ");
	scanf("%i", &x);
	do {
		s += x;
		--x;
	} while (x > 0);
	printf("Сумма = %i", s);
	return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "russian");

	int x, s;
	s = 0;
	printf("Введите число: ");
	scanf("%i", &x);
pp:
	s += x;
	--x;

	if (x > 0) {
		goto pp;
	}
	printf("Сумма = %i", s);
	return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int rcs(int x, int s) {
	if (x > 0) {
		s += x;
		return rcs(x - 1, s);
	}
	else {
		return s;
	}
}

int main() {
	setlocale(LC_ALL, "russian");

	int x, s;
	s = x = 0;
	printf("Введите число: ");
	scanf("%i", &x);
	s = rcs(x, s);
	printf("Сумма = %i", s);
	return 0;
}
