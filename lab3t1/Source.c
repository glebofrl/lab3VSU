#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int num, numScnd;
	puts("введите 2 числа через пробел");
	scanf("%d %d", &num, &numScnd);
	printf("Введены числа %d и %d\n", num, numScnd);

	int plus = numScnd + num;
	int minus = numScnd - num;
	int proizv = numScnd * num;
	int chastn = numScnd / num;
	int ostatok = numScnd % num;

	printf("Сумма = %d\n", plus);
	printf("Разность = %d\n", minus);
	printf("Произведение = %d\n", proizv);
	printf("Частное = %d\n", chastn);
	printf("Остаток = %d\n", ostatok);

	getchar();
}