#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char y = '\n';
	char v = ' ';
	int x;
	for (x = 0; x < 100; ++x)
		if (x < 10)
		{
			if (x ==  0) {
				printf("%c%i  ", v, x);
			}
			else
			{
				printf("%i  ", x);
			}
		}
		else
		{

			if (x % 10 != 0)
			{
				printf("%i ", x);
			}
			else
			{
				printf("%c%i ", y, x);
			}
		}
	return 0;
}
