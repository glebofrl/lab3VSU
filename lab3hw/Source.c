#define _CRT_SECURE_NO_DEPRECATE
#define bar 0.00133322 
#define Pa 133.32
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int mm;
	float result;
	puts("������� �� ��. ��:");

	scanf("%d", &mm);

	result = bar * mm;
	printf("%d �� ��. �� � ��� %.2f ���\n", mm, result);

	result = Pa * mm;
	printf("%d �� ��. �� � ��� %.2f ��������\n", mm, result);

	system("pause");
}