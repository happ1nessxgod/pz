#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	char a, xs[23], c[1000], g; FILE* f, * fch, * gz;
	setlocale(LC_ALL, "rus");
	printf("выбор копирования файла\n\nr - вывод данных в консоль или c - копировать файл в другой\
.\nВыберите режим работы: ");
	scanf(" %c", &a);
	switch (a) {
	case 'r': puts("введите название файла txt до 20 символов: ");
		fflush(stdin);
		scanf("%s", xs);
		sprintf(xs, "%s.txt", xs);
		printf("вы указали имя файла: ""%s\n""", xs);
		f = fopen(xs, "w");
		fprintf(f, "%s", "111 222 333 444 555 666 777 888 999");
		fclose(f);
		f = fopen(xs, "r");
		while (fgets(c, 1000, f) != NULL) {
			printf("%s", c);
		}
		fclose(f);
		return 0;
	case 'c': puts("введите название файла txt, в который хотите скопировать новый исходный файл: ");
		fflush(stdin);
		scanf("%s", &xs);
		sprintf(xs, "%s.txt", xs);
		printf("вы указали имя файла: ""%s\n""", xs);
		fch = fopen("source.txt", "w");
		fprintf(fch, "%s", "111 222 333 444 555 666 777 888 999");
		fclose(fch);
		fch = fopen("source.txt", "r");
		gz = fopen(xs, "w");
		while ((g = fgetc(fch)) != EOF) {
			fputc(g, gz);
		}
		fclose(fch);
		fclose(gz);
		printf("Текст успешно скопирован из source.txt в ваш файл\n");
		return 0;
	default: puts("неверный выбор");
		return 0;
	}
}
