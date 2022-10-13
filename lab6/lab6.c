#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>



 /*float fun(float x)
 {

	 if (x <= 2) {
		 return (pow(x, 2) + 4 * x + 5);
	 }
	 else
	 {
		 return (1 / (pow(x, 2) + 4 * x + 5));
	 }
 }*/

/*fun1()
{
	setlocale(LC_ALL, "rus");
	int yeas;
	printf("Введите год: \n");
	scanf("%d", &yeas);
	if (((yeas % 4 == 0) && (yeas % 100 != 0)) || (yeas % 400 == 0)) printf("Год %d високосный", yeas);
	else printf("Год %d не високосный", yeas);

} */

 int main()
 {
	 /*float x, z;
	 setlocale(LC_ALL, "rus");
	 printf("Введите x: \n");
	 scanf("%f", &x);
	 z = fun(x);
	 printf("Ответ = %.3f", z);*/
	 /*char c;
	 setlocale(LC_ALL, "rus");
	 printf("Введите символ:");
	 scanf("%c", &c);
	 switch (c)
	 {
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
			printf("Введена буква.\n");
			break;
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '0':
			printf("Введена цифра.\n");
			break;
		
		default:
			printf("Неизвестный символ.\n");		
	 }
	 return 0;*/

	 int x;
	 setlocale(LC_ALL, "rus");
	 printf("Введите месяц: \n");
	 scanf("%d", &x);
	 switch (x) 
	 {
	 case 1:
	 case 2:
	 case 12:
		 printf("Введеный месяц: Зима");
		 break;
	 case 3:
	 case 4:
	 case 5:
		 printf("Введеный месяц: Весна");
		 break;
	 case 6:
	 case 7:
	 case 8:
		 printf("Введеный месяц: Лето");
		 break;
	 case 9:
	 case 10:
	 case 11:
		 printf("Введеный месяц: Осень");
		 break;

	 default:
		 printf("Неизвестный месяц.\n");

	 }
	
	 return 0;
 }
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14159265358979323846

float cosin(float x)
{
	return (pow(x, 2) + 2 * PI * cos(PI * x));
}
 

 void main()
{
	 /*int x;
	 char c,b;
	 setlocale(LC_ALL, "rus");
	 printf("Введите первый символ: \n");
	 scanf("%c", &c); 
	 getchar();
	 printf("Введите второй символ: \n");
	 scanf("%c", &b);
	 getchar();
	 printf("Введите кол-во символов: \n");
	 scanf("%d",&x);
	 printf("+");
	 for (int start = 1; start <= x/2; start++) printf("%c",c);
	 for (int start = x / 2; start <= x; start++) printf("%c",b);
	 printf("+");*/
	 
	 /* int n, m, s = 0;
	 setlocale(LC_ALL, "rus");
	 printf("Введите m и n: \n");
	 scanf(" %d", &m);
	 scanf(" %d", &n);
	 for (int c = 0; m <= n; ++c,s += m, ++m);
	 printf("результат %d", s);*/

	 float y,x = 0.1;
	 setlocale(LC_ALL, "rus");
	 printf("y = x^2 + 2*PI*cos(PI*x)\n");
	 printf("Введите шаг табуляции: \n");
	 scanf("%f", &y);
	
	 printf("__________________\n");
	 printf("|   x  |   F(x)  |\n");
	 for (;  x <= 2.5-y; x += y)
	 {
		 printf("|%6.3f|%9.5f|   ", x, cosin(x));
		 printf("|%6.3f|%9.5f|\n", x+y, cosin(x+y));
	 }

}


