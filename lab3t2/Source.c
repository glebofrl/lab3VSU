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
	puts("¬ведите значение дл€ рассчета:");

	scanf("%d", &dym);

	result = D * dym;
	printf("%d английских дюймов Ц это %.2f см\n", dym, result);

	result = pulgada * dym;
	printf("%d испанских дюймов Ц это %.2f см", dym, result);

	getchar();
}