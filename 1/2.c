#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	int var;

	printf(" 0. Воскресенье \n 1. Понедельник \n 2. Вторник \n 3. Среда \n 4. Четверг \n 5. Пятница \n 6. Суббота \n Введите цифру дня недели: ");
	do
	{
		scanf("%d", &var);
	
		switch (var)
		{
		case 0: printf("Воскресенье");
			break;
		case 1: printf("Понедельник");
			break;
		case 2: printf("Вторник");
			break;
		case 3: printf("Среда");
			break;
		case 4: printf("Четверг");
			break;
		case 5: printf("Пятница");
			break;
		case 6: printf("Суббота");
			break;
		default:
			printf("Некорректный ввод, введите цифру от 0 до 6: ");
			break;
		}
	}  while (var < 0 || var > 6);

	return 0;
}
