#define _CRT_SECURE_NO_DEPRECATE
#define bar 0.00133322 
#define Pa 133.32
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int mm;
	float resultBar, resultPa;
	puts("������� �� ��. ��:");

	scanf("%d", &mm);

	resultBar = bar * mm;
	resultPa = Pa * mm;
	printf("%d �� ��. �� � ��� %.3f ���\n", mm, resultBar);
	printf("%d �� ��. �� � ��� %.2f ��������\n", mm, resultPa);

	system("pause");
}