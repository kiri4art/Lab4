#include <stdio.h>
#include <locale.h>

int a, b, c;

void main()
{
	setlocale(LC_ALL, "RUS");
	puts("������� ����� ������� �����:");
	scanf("%d", &a);
	puts("������� ����� ������� �����:");
	scanf("%d", &b);
	puts("������� ����� �������� �����:");
	scanf("%d", &c);
	printf("������� ��������� ������� ������� (1 - ��, 0 - ���): %d", (a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0));
}