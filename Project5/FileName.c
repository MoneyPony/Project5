#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int main()
{
	int x, y;
	float sr, raz1, raz2;
	setlocale(LC_ALL, "RUS");
	printf("�������� ����: ");
	scanf("%d", &x);
	printf("������� ����: ");
	scanf("%d", &y);
	sr = (float)(x+y) / 2;
	raz1 = x - sr;
	raz2 = y - sr;
	printf("������� �������: %f\n", sr);
	printf("������� ����: %f\n", raz1);
	printf("������� ����: %f", raz2);
}