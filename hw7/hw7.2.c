#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	float x, y;
	char z;
	setlocale(LC_ALL, "rus");
	printf("������� ������ ����� ������ ������ ��������: \n");
	scanf("%f%c%f",&x,&z,&y);
	switch (z)
	{
	case '+':
		printf("%f + %f = %f", x, y, x+y);
		break;
	case '-':
		printf("%f - %f = %f", x, y, x-y);
		break;
	case '*':
		printf("%f * %f = %f", x, y, x*y);
		break;
	case '/':
		printf("%f / %f = %.2f",x , y, x/y);
		break;
	default: printf("������� �� ����������");
		break;
	}

}