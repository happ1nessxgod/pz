#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

unsigned int skidka3(int N)
{
    return (N * 0.97);
}
unsigned int skidka5(int N)
{
    return (N * 0.95);
}

int main() {
    setlocale(LC_ALL, "rus");

    unsigned int N;

    printf("Программа расчета скидки нашего магазина\nВведите стоимость покупки: ");
    scanf("%ui", &N);
    N = abs(N);
    if (N >= 500 && N <= 999)
    {
        printf("Вам предостовляется скидка 3 процента\n \nС учетом скидки стоимость покупки обойдется в %u рублей", skidka3(N));
    }
    if (1000 <= N)
    {
        printf("Вам предостовляется скидка 5 процентов\n \nС учетом скидки стоимость покупки обойдется в %u рублей", skidka5(N));
    }
    if (N < 500)
    {
        printf("Скидка не предоставляется. Стоимость вашей покупки останется %d рублей", N);
    }
    return 0;
}
