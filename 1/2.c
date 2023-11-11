#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	int var;

	printf(" 0. Âîńęđĺńĺíüĺ \n 1. Ďîíĺäĺëüíčę \n 2. Âňîđíčę \n 3. Ńđĺäŕ \n 4. ×ĺňâĺđă \n 5. Ď˙ňíčöŕ \n 6. Ńóááîňŕ \n Ââĺäčňĺ öčôđó äí˙ íĺäĺëč: ");
	do
	{
		scanf("%d", &var);
	
		switch (var)
		{
		case 0: printf("Âîńęđĺńĺíüĺ");
			break;
		case 1: printf("Ďîíĺäĺëüíčę");
			break;
		case 2: printf("Âňîđíčę");
			break;
		case 3: printf("Ńđĺäŕ");
			break;
		case 4: printf("×ĺňâĺđă");
			break;
		case 5: printf("Ď˙ňíčöŕ");
			break;
		case 6: printf("Ńóááîňŕ");
			break;
		default:
			printf("Íĺęîđđĺęňíűé ââîä, ââĺäčňĺ öčôđó îň 0 äî 6: ");
			break;
		}
	}  while (var < 0 || var > 6);

	return 0;
}
