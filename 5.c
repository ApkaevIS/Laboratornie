#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
	const int N = 100;
	uint8_t test;
	int error,exit1, j, i;
	char c;
	float F, G, Y, a, x, x2, shag, min, max, kolshag;
	float mas [N];
  char stx[255]; char stx2[255]; char sta[255]; char stk[255]; char stg[255]; char stf [255]; char sty [255]; char shab[255];



	while (exit1 != 1)
	{ 
	printf(" 1-G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x \n 2-F = sinh(3*a*a+7*a*x+4*x*x) \n 3-Y = -atanh(30*a*a+37*a*x-4*x*x) \n");
	printf ("Выберите функцию \n");
	scanf ("%c", &c);
  printf ("Задайте шаблон для посика совпадения\n");
  for(i = 0; i <= N; i++)
    {
      mas [i] = 0;
    }
  getchar();
  getchar();
	switch (c)
	{
		case '1':
          j = 0;
          i = 0;
	   		  printf ("Введите число a \n");
          fgets(sta, 255, stdin);
          a = atof(sta);
       		printf ("Введите число x \n");
       		fgets(stx, 255, stdin);
          x = atof(stx);
       		printf ("Введите число x2 \n");
       		fgets(stx2, 255, stdin);
          x2 = atof(stx2);
       		printf ("Введите колличество шагов вычисления функции\n");
       		fgets(stk, 255, stdin);
          kolshag = atof(stk);
       		shag = (x2-x)/kolshag;
       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем сама область\n");
       			error = 6;
       			break;
       			}

        	for (;x <= x2;x = x + shag)
             	{
              if (fabs(24*a*a-49*a*x+15*x*x) <= 0.00001)
                {
              printf ("Функция не может быть вычислена так как знаменатель не может быть равен 0\n");
              error = 1;
              break;
                }
	    		    G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x;
              mas[j] = G;
              printf("%f\t %f\n", mas [j],x);
              j = j+1;
              i = i+1;
	    	 	}
          fgets (shab, 255, stdin);
          for (j = 0; j <= i; j++)
            {
            sprintf(stg, "%2f", mas[j]);
            printf("%s\t", stg); 
            }
          printf("%d\n", strcmp(stg, shab)); 
	    	  min = mas[0];
	    	  max = mas[0];
          for (j = 0; j <= i ; j++)
            	{
              		if (mas[j] < min )
              		{
                		min = mas[j];
              		}

              		if (mas[j] > max )
              		{
                		max = mas [j];
              		}
            	} 

          	printf("\n Минимальный элемент %f\n", min);
          	printf("\n Максимальный элемент %f\n", max);

		break;

		case '2':
          j = 0;
          i = 0;
	   		  printf ("Введите число a \n");
          fgets(sta, 255, stdin);
          a = atof(sta);
          printf ("Введите число x \n");
          fgets(stx, 255, stdin);
          x = atof(stx);
          printf ("Введите число x2 \n");
          fgets(stx2, 255, stdin);
          x2 = atof(stx2);
          printf ("Введите колличество шагов вычисления функции\n");
          fgets(stk, 255, stdin);
          kolshag = atof(stk);
       		shag = (x2-x)/kolshag;
       		if (shag > x2)
       			{
       			  printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
       			  error = 6;
       			  break;
       			}

       		for (;x <= x2;x = x + shag)
       			{ 
       			  	F = sinh(3*a*a+7*a*x+4*x*x);
              		mas[j] = F;
              		j = j+1;
              		i = i+1;   		
       			}
            for (j = 0; j <= i; j++)
            {
            sprintf(stf, "%2f", mas[j]);
            printf("%s\t", stf); 
            } 
	    	min = mas[0];
	    	max = mas[0];
          	for (j = 0; j <= i ; j++)
            	{
              		if (mas[j] < min )
              		{
                		min = mas[j];
              		}

              		if (mas[j] > max )
              		{
                		max = mas [j];
              		}
            	} 
          	printf("\n Минимальный элемент %f\n", min);
          	printf("\n Максимальный элемент %f\n", max);

		break;

		case '3':
          	j = 0;
          	i = 0;
	   		printf ("Введите число a \n");
          fgets(sta, 255, stdin);
          a = atof(sta);

       		if (-0.1>=a && 0.1<=a)
        		{
	    		printf("Число не пренадлжеит области определения функции \n");
	    		error = 2;
	    		break;
        		}

       		printf ("Введите число x \n");
          fgets(stx, 255, stdin);
          x = atof(stx);

       		if (-0.25 >= x && 0.25 <= x)
        		{
	    		printf("Число не пренадлжеит области определения функции \n");
	    		error = 3;
	    		break;
        		}

        	printf ("Введите число x2 \n");	
          fgets(stx2, 255, stdin);
          x2 = atof(stx2);

       		if (-0.25 >= x2 && 0.25 <= x2)
        		{
	    		printf("Число не пренадлжеит области определения функции \n");
	    		error = 3;
	    		break;
        		}

       		printf ("Введите колличество шагов вычисления функции\n");
          fgets(stk, 255, stdin);
          kolshag = atof(stk);
       		shag = (x2-x)/kolshag;

       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
       			break;
       			}


       		for (x;x <= x2;x = x + shag)
       			{ 	
       				if (-0.25 >= x && 0.25 <= x)
       				{
	    				printf("Число не пренадлжеит области определения функции \n");
	    				error = 4;
	     				break;
        			}  	
	    		  	Y = -atanh(30*a*a+37*a*x-4*x*x);
            		mas[j] = Y;
            		j = j+1;
            		i = i+1;      
        		}
            for (j = 0; j <= i; j++)
            {
            sprintf(stg, "%2f", mas[j]);
            printf("%s\t", stg); 
            } 
        	min = mas[0];
	    	  max = mas[0];
          	for (j = 0; j <= i ; j++)
            	{
              		if (mas[j] < min )
              		{
                		min = mas[j];
              		}

              		if (mas[j] > max )
              		{
                		max = mas [j];
              		}
            	} 

          	printf("\n Минимальный элемент %f\n", min);
          	printf("\n Максимальный элемент %f\n", max);
    	break;      

		default:
			printf("Такой функции нету \n");
			error = 5;
		
	}	
	
printf("Хотите выйти из программы? 1 - Да 0 - Нет\n");
scanf ("%d", &exit1);
getchar();
}
	return error;
}
