#include <stdio.h>
#include <locale.h>

int a, b, c;

void main()
{
	setlocale(LC_ALL, "RUS");
	puts("¬ведите массу первого камн€:");
	scanf("%d", &a);
	puts("¬ведите массу второго камн€:");
	scanf("%d", &b);
	puts("¬ведите массу третьего камн€:");
	scanf("%d", &c);
	printf("”словие успешного запуска реакции (1 - да, 0 - нет): %d", (a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0));
}