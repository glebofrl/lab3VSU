#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int num, numScnd;
	puts("������� 2 ����� ����� ������");
	scanf("%d %d", &num, &numScnd);
	printf("������� ����� %d � %d\n", num, numScnd);

	int plus = numScnd + num;
	int minus = numScnd - num;
	int proizv = numScnd * num;
	int chastn = numScnd / num;
	int ostatok = numScnd % num;

	printf("����� = %d\n", plus);
	printf("�������� = %d\n", minus);
	printf("������������ = %d\n", proizv);
	printf("������� = %d\n", chastn);
	printf("������� = %d\n", ostatok);

	getchar();
}