#include <stdio.h>
#include <locale.h>

int i;

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("Введите трёхзначное число:");
	scanf("%d", &i);
	printf("Последняя цифра числа - %d\nПервая цифра числа - %d\nСумма цифр числа - %d\nОбратная запись числа - %d%d%d\n", i % 10, i / 100, i / 100 + (i % 100 - i % 10) / 10 + i % 10, i % 10, (i % 100 - i % 10) / 10, i / 100);
}