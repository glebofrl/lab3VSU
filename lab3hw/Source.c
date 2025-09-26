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
	puts("¬ведите мм рт. ст:");

	scanf("%d", &mm);

	result = bar * mm;
	printf("%d мм рт. ст Ц это %.2f бар\n", mm, result);

	result = Pa * mm;
	printf("%d мм рт. ст Ц это %.2f паскалей\n", mm, result);

	system("pause");
}