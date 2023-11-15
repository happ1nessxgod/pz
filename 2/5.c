#include <stdio.h>

int main()
{
	int x;
	for (x = 0; x < 10; ++x)
		printf("%2i ", x);
	printf("\n");
	for (x = 10; x < 20; ++x)
		printf("%i ", x);
	printf("\n");
	for (x = 20; x < 30; ++x)
		printf("%i ", x);
	printf("\n");
	for (x = 30; x < 40; ++x)
		printf("%i ", x);
	printf("\n");
	for (x = 40; x < 50; ++x)
		printf("%i ", x);
	printf("\n");
	for (x = 50; x < 60; ++x)
		printf("%i ", x);
	printf("\n");
	for (x = 60; x < 70; ++x)
		printf("%i ", x);
	printf("\n");
	for (x = 70; x < 80; ++x)
		printf("%i ", x);
	printf("\n");
	for (x = 80; x < 90; ++x)
		printf("%i ", x);
	printf("\n");
	for (x = 90; x < 100; ++x)
		printf("%i ", x);
	return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------

#define tttt printf("%c", i);
#include <stdio.h>

int main()
{
	char i = '\n';
	int x = -1;
	while (x < 9)
	{
		x++;
		printf("%2i ", x);
	}
	tttt
		while (x < 19)
		{
			x++;
			printf("%i ", x);
		}
	tttt
		while (x < 29)
		{
			x++;
			printf("%i ", x);
		}
	tttt
		while (x < 39)
		{
			x++;
			printf("%i ", x);
		}
	tttt
		while (x < 49)
		{
			x++;
			printf("%i ", x);
		}
	tttt
		while (x < 59)
		{
			x++;
			printf("%i ", x);
		}
	tttt
		while (x < 69)
		{
			x++;
			printf("%i ", x);
		}
	tttt
		while (x < 79)
		{
			x++;
			printf("%i ", x);
		}
	tttt
		while (x < 89)
		{
			x++;
			printf("%i ", x);
		}
	tttt
		while (x < 99)
		{
			x++;
			printf("%i ", x);
		}
	return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------

#define tttt printf("%c", i);
#include <stdio.h>

int main()
{
	char i = '\n';
	int x = -1;
	do
	{
		x++;
		printf("%2i ", x);
	} while (x < 9);
	tttt
		do
		{
			x++;
			printf("%i ", x);
		} while (x < 19);
		tttt
			do
			{
				x++;
				printf("%i ", x);
			} while (x < 29);
			tttt
				do
				{
					x++;
					printf("%i ", x);
				} while (x < 39);
				tttt
					do
					{
						x++;
						printf("%i ", x);
					} while (x < 49);
					tttt
						do
						{
							x++;
							printf("%i ", x);
						} while (x < 59);
						tttt
							do
							{
								x++;
								printf("%i ", x);
							} while (x < 69);
							tttt
								do
								{
									x++;
									printf("%i ", x);
								} while (x < 79);
								tttt
									do
									{
										x++;
										printf("%i ", x);
									} while (x < 89);
									tttt
										do
										{
											x++;
											printf("%i ", x);
										} while (x < 99);
										return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    int i = 0;
    if (i < 10)
    {
        goto qw;
    }
    else
    {
        goto qq;
    }

qw: for (int x = 0; x < 10; ++x)
{
    if (x % 10 == 9) {
        printf("%2i ", x);
        printf("\n");
    }
    else
    {
        printf("%2i ", x);
    }
}
qq: for (int x = 10; x < 100; ++x)
{
    if (x % 10 == 9) {
        printf("%i ", x);
        printf("\n");
    }
    else
    {
        printf("%i ", x);
    }
}
return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

void rcs(int s, int e) {
    if (s <= e) {
        printf("%2i ", s);
        if (s % 10 == 9) {
            printf("\n");
        }
        rcs(s + 1, e);
    }
}

int main() {
    rcs(0, 99);
    return 0;
}
