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
	printf("¬ведите год: \n");
	scanf("%d", &yeas);
	if (((yeas % 4 == 0) && (yeas % 100 != 0)) || (yeas % 400 == 0)) printf("√од %d високосный", yeas);
	else printf("√од %d не високосный", yeas);

} */

 int main()
 {
	 /*float x, z;
	 setlocale(LC_ALL, "rus");
	 printf("¬ведите x: \n");
	 scanf("%f", &x);
	 z = fun(x);
	 printf("ќтвет = %.3f", z);*/
	 /*char c;
	 setlocale(LC_ALL, "rus");
	 printf("¬ведите символ:");
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
			printf("¬ведена буква.\n");
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
			printf("¬ведена цифра.\n");
			break;
		
		default:
			printf("Ќеизвестный символ.\n");		
	 }
	 return 0;*/

	 int x;
	 setlocale(LC_ALL, "rus");
	 printf("¬ведите мес€ц: \n");
	 scanf("%d", &x);
	 switch (x) 
	 {
	 case 1:
	 case 2:
	 case 12:
		 printf("¬веденый мес€ц: «има");
		 break;
	 case 3:
	 case 4:
	 case 5:
		 printf("¬веденый мес€ц: ¬есна");
		 break;
	 case 6:
	 case 7:
	 case 8:
		 printf("¬веденый мес€ц: Ћето");
		 break;
	 case 9:
	 case 10:
	 case 11:
		 printf("¬веденый мес€ц: ќсень");
		 break;

	 default:
		 printf("Ќеизвестный мес€ц.\n");

	 }
	
	 return 0;
 }
