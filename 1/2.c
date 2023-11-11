#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	int var;

	printf(" 0. Воскресенье \n 1. Понедельник \n 2. Вторник \n 3. Среда \n 4. Четверг \n 5. Пятница \n 6. Суббота \n Введите цифру дня недели от 0 до 6: ");

	while (1)
	{
		if (scanf("%d", &var) == 1)
		{
			if (getchar() != '\n')
			{
				printf("Некорректный ввод. Введите только одну цифру: ");
				while (getchar() != '\n');
			}
			else
			{
				if (0 >= var <= 6)
				{
					switch (var)
					{
					case 0: printf("\nВоскресенье\n");
						return 0;
					case 1: printf("\nПонедельник\n");
						return 0;
					case 2: printf("\nВторник\n");
						return 0;
					case 3: printf("\nСреда\n");
						return 0;
					case 4: printf("\nЧетверг\n");
						return 0;
					case 5: printf("\nПятница\n");
						return 0;
					case 6: printf("\nСуббота\n");
						return 0;
					default:
						printf("Некорректный ввод. Введите цифру от 0 до 6.\n");
						continue;
					}
				}
				else
				{
					printf("Цифра должно быть от 0 до 6. Пожалуйста, введите корректную цифру.\n");
				}
			}
		}
		else
		{
			printf("Некорректный ввод. Введите только одну цифру: ");
			while (getchar() != '\n');
		}
	}
	return 0;
}
