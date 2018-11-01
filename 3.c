#include <stdio.h>
#include <math.h>

int main()
{
	int error,exit1;
	char c;
	float F, G, Y, a, x,x2,shag;

	while (exit1 != 1)
	{
	getchar();
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
       		printf ("Введите число x2 \n");
       		scanf ("%f", &x2);
       		printf ("Введите шаг вычисления функции\n");
       		scanf ("%f", &shag);
       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем сама область\n");
       			error = 6;
       			break;
       			}

        		for (x;x <= x2;)
            		{
            		if (24*a*a-49*a*x+15*x*x == 0)
	           			{
		    			printf ("Функция не может быть вычислена так как знаменатель не может быть равен 0\n");
		    			error = 1;
		    			break;
	           			}
	    			G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x;
	    			printf("%f\t %f\n",x,G);
        			x = x + shag;
	    			}
	   		break;
	   	
		break;

		case '2':
	   		printf ("Введите число a \n");
       		scanf ("%f", &a);
       		printf ("Введите число x \n");
       		scanf ("%f", &x);
       		printf ("Введите число x2 \n");
       		scanf ("%f", &x2);
       		printf ("Введите шаг вычисления функции\n");
       		scanf ("%f", &shag);
       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
       			error = 6;
       			break;
       			}

       		for (x;x <= x2;)
       			{ 
       			F = sinh(3*a*a+7*a*x+4*x*x);
	    		printf("%f\t %f\n",x,F);
	    		x = x + shag;
       			}
		break;

		case '3':
	   		printf ("Введите число a \n");
       		scanf ("%f", &a);
       		if (-0.1>=a && 0.1<=a)
        		{
	    		printf("Число не пренадлжеит области определения функции \n");
	    		error = 2;
	    		break;
        		}
       		printf ("Введите число x \n");
       		scanf ("%f", &x);
       		if (-0.25 >= x && 0.25 <= x)
        		{
	    		printf("Число не пренадлжеит области определения функции \n");
	    		error = 3;
	    		break;
        		}
        	printf ("Введите число x2 \n");	
        	scanf ("%f", &x2);
       		if (-0.25 >= x2 && 0.25 <= x2)
        		{
	    		printf("Число не пренадлжеит области определения функции \n");
	    		error = 3;
	    		break;
        		}
        	printf ("Введите шаг вычисления функции\n");
       		scanf ("%f", &shag);
       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
       			break;
       			}


       		for (x;x <= x2;)
       			{ 	
       			if (-0.25 >= x && 0.25<=x)
       				{
	    			printf("Число не пренадлжеит области определения функции \n");
	    			error = 4;
	     			break;
        			}  	
	    		Y = -atanh(30*a*a+37*a*x-4*x*x);
	    		printf("%f\t %f\n",x,Y);
	    		x = x + shag;
        		}
		break;

		default:
			printf("Такой функции нету \n");
			error = 5;
		break;
		}	
	
printf("Хотите выйти из программы? 1 - Да 0 - Нет\n");
scanf ("%d", &exit1);
}
	return error;
}
