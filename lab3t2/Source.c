#define _CRT_SECURE_NO_DEPRECATE
#define D 2.54
#define pulgada 2.32166
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int dym;
	float result;
	puts("������� �������� ��� ��������:");

	scanf("%d", &dym);

	result = D * dym;
	printf("%d ���������� ������ � ��� %.2f ��\n", dym, result);

	result = pulgada * dym;
	printf("%d ��������� ������ � ��� %.2f ��", dym, result);

	getchar();
}