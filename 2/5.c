#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	char i = '\n';
	int x;
	for (x = 0; x < 10; ++x)
		printf(" %i ", x);
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
										printf("\n");
	return 0;
}
