#include <stdio.h>
#include <locale.h>

int a = 11;
int b = 3;
int x;
float y;
double z;

void main()
{
	setlocale(LC_ALL, "RUS");
	x = a / b;
	y = (float)a / (float)b;
	z = (double)a / (double)b;
	printf("%d - ��������� ������� ������ ����� �� �����\n%f - ��������� ������� ������������� ����� �� ������������ (float)\n%e - ��������� ������� ������������� ����� �� ������������ (double)\n", x, y, z);
}