#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	float num1, num2, res;
	int w = 20;

	puts("¬ведите значени€ дл€ рассчета:");

	scanf("%f %f", &num1, &num2);

	printf("%.*s\n", w * 3 + 4, "________________________________________________________________");
	printf("|%*s|%*s|%*s|\n", w, "a*b", w, "a+b", w, "a-b");
	printf("%.*s\n", w * 3 + 4, "________________________________________________________________");
	printf("|%*.2g*%-*.2g|%*.2g+%-*.2g|%*.2g-%-*.2g|\n", w / 2 - 1, num1, w / 2, num2, w / 2 - 1, num1, w / 2, num2, w / 2 - 1, num1, w / 2, num2);
	printf("%.*s\n", w * 3 + 4, "________________________________________________________________");
	printf("|%*g|%*g|%*g|\n", w, num1 * num2, w, num1 + num2, w, num1 - num2);

	system("pause");
}