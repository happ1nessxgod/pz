#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	int var;

	printf(" 0. Воскресенье \n 1. Понедельник \n 2. Вторник \n 3. Среда \n 4. Четверг \n 5. Пятница \n 6. Суббота \n");
	do
	{
		printf("\nВведите цифру дня недели от 0 до 6: : ");
		while (1)
		{
			int c = scanf("%d", &var);

			if (c == 1)
			{
				if (getchar() != '\n')
				{
					printf("Некорректный ввод. Введите только одно число: ");
					while (getchar() != '\n');
				}
				else
				{
					break;
				}
			}
			else
			{
				printf("Некорректный ввод. Введите только одно число: ");
				while (getchar() != '\n');
			}
		}
		switch (var)
		{
		case 0: printf("\nВоскресенье\n");
			break;
		case 1: printf("\nПонедельник\n");
			break;
		case 2: printf("\nВторник\n");
			break;
		case 3: printf("\nСреда\n");
			break;
		case 4: printf("\nЧетверг\n");
			break;
		case 5: printf("\nПятница\n");
			break;
		case 6: printf("\nСуббота\n");
			break;
		default:
			printf("Некорректный ввод");
		}
	} while (var < 0 || var > 6);

	return 0;
}
