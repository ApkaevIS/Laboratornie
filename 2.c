#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

char c;
float F, G, Y, a, x;

printf(" 1-G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x \n 2-F = sinh(3*a*a+7*a*x+4*x*x) \n 3-Y = -atanh(30*a*a+37*a*x-4*x*x) \n");
printf ("Выберите функцию \n");
scanf ("%c", &c);

switch (c)
{
	case '1':
	printf ("Введите число a \n");
scanf ("%f", &a);
printf ("Введите число x \n");
scanf ("%f", &x);
	G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x;
	if (24*a*a-49*a*x+15*x*x == 0)
	{
		printf("Функция не может быть вычислена так как знаменатель не может быть равен 0\n");
		exit(1);
	}
	printf("G=%f\n",G); break;

	case '2':
	printf ("Введите число a \n");
scanf ("%f", &a);
printf ("Введите число x \n");
scanf ("%f", &x);
	F = sinh(3*a*a+7*a*x+4*x*x);
	printf("F=%f\n",F); break;

	case '3':
	printf ("Введите число a \n");
scanf ("%f", &a);
if(-0.1>a || a<0.1)
{
	printf("Число не пренадлжеит области определения функции \n");
	exit(1);
}

printf ("Введите число x \n");
scanf ("%f", &x);
if(-0.2>x || x<0.2)
{
	printf("Число не пренадлжеит области определения функции \n");
	exit(1);
}
		Y = -atanh(30*a*a+37*a*x-4*x*x);
	printf("Y=%f\n",Y); break;

	default: printf("Такой функции нету \n");
}
	return 0;
}
