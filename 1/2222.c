#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	int var;

	printf(" 0. ����������� \n 1. ����������� \n 2. ������� \n 3. ����� \n 4. ������� \n 5. ������� \n 6. ������� \n ������� ����� ��� ������: ");
	do
	{
		scanf("%d", &var);
	
		switch (var)
		{
		case 0: printf("�����������");
			break;
		case 1: printf("�����������");
			break;
		case 2: printf("�������");
			break;
		case 3: printf("�����");
			break;
		case 4: printf("�������");
			break;
		case 5: printf("�������");
			break;
		case 6: printf("�������");
			break;
		default:
			printf("������������ ����, ������� ����� �� 0 �� 6: ");
			break;
		}
	}  while (var < 0 || var > 6);

	return 0;
}