#include <stdio.h>
#include <locale.h>

int i;

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("������� ���������� �����:");
	scanf("%d", &i);
	printf("��������� ����� ����� - %d\n������ ����� ����� - %d\n����� ���� ����� - %d\n�������� ������ ����� - %d%d%d\n", i % 10, i / 100, i / 100 + (i % 100 - i % 10) / 10 + i % 10, i % 10, (i % 100 - i % 10) / 10, i / 100);
}