#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
  const int N = 100;
  struct res
  {
    char result[255];
  };
	uint8_t test;
	int error,exit1, j, i, k;
	char* sovp;
  float mas[N];
	float F, G, Y, a, x, x2, shag, min, max, kolshag;
  char stx[255]; char stx2[255]; char sta[255]; char stk[255]; char blok [255]; char stg[255]; char stf[255]; char sty[255];
  char sh[255];char vivod[765];
  struct res otvet[3];


	while (exit1 != 1)
	{
		memset(stg,0,255); memset(stf,0,255); memset(blok,0,255); memset(sty,0,255); 
		memset(mas, 0, N);
          j = 0;
          i = 0;
          sovp = 0;
          printf("Функция G\n");
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

        	for (;x <= x2-shag;x = x + shag)
             	{
              if (fabs(24*a*a-49*a*x+15*x*x) <= 0.00001)
                {
              printf ("Функция не может быть вычислена так как знаменатель не может быть равен 0\n");
              error = 1;
              break;
                }
	    		    G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x;
              mas[j] = G;
              sprintf(blok, "%2f\t", mas[j]);
              strcat(stg, blok);
              j = j+1;
              i = i+1;
	    	 	}	 	
        printf("%s\n", stg);
        strncpy(otvet[0].result,stg,255);
        printf ("Задайте шаблон для поиска совпадения\n");
        scanf("%s", sh);
        sovp = strstr(stg, sh);
        while(sovp != NULL)
    {
      sovp = strstr(sovp + 1, sh);
      k+=1;
    }      
          printf("\nКолличество совпадений %d\n",k); 

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

          FILE *file;
          file = fopen("laba7.txt", "w+");
          if ((file = fopen("laba7.txt","w+")) == NULL)
          {
            printf("Ошибка при открытии файла.\n");
            exit(1);
          } 
          fprintf(file, "%s\n", otvet[0].result);    
          fclose(file);


          j = 0;
          i = 0;
          sovp = 0;
          memset(blok,0,255);
          memset(mas, 0, N);
          getchar();
          printf("Функция F\n");
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
              		sprintf(blok, "%2f\t", mas[j]);
              		strcat(stf, blok);
              		j = j+1;
              		i = i+1;   		
       			}
       		printf("%s\n", stf);
          strncpy(otvet[1].result,stf,255);
          printf ("Задайте шаблон для поиска совпадения\n");
          scanf("%s", sh);
          sovp = strstr(stf, sh);
          while(sovp != NULL)
          {
            sovp = strstr(sovp + 1, sh);
            k+=1;
          }      
          printf("\nКолличество совпадений %d\n",k); 	
	    	  min = mas[0];
	    	  max = mas[0];
          	for (j = 0; j < i ; j++)
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
 
        
          file = fopen("laba7.txt", "a+");
          if ((file = fopen("laba7.txt","a+")) == NULL)
          {
            printf("Ошибка при открытии файла.\n");
            exit(1);
          } 
          fprintf(file, "%s\n", otvet[1].result);    
          fclose(file);


          j = 0;
          i = 0;
          sovp = 0;
          memset(blok,0,255);
          memset(mas, 0, N);
          
          getchar();
          printf("Функция Y\n");
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
              	sprintf(blok, "%2f\t", mas[j]);
              	strcat(sty, blok);
            		j = j+1;
            		i = i+1;      
        		}
        	printf("%s\n", sty);
          strncpy(otvet[2].result,sty,255);
          printf ("Задайте шаблон для поиска совпадения\n");
          scanf("%s", sh);
          sovp = strstr(sty, sh);
          while(sovp != NULL)
          {
            sovp = strstr(sovp + 1, sh);
            k+=1;
          }      
          printf("\nКолличество совпадений %d\n",k); 	
        	min = mas[0];
	    	  max = mas[0];
          for (j = 0; j < i ; j++)
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

 
          file = fopen("laba7.txt", "a+");
          if ((file = fopen("laba7.txt","a+")) == NULL)
          {
            printf("Ошибка при открытии файла.\n");
            exit(1);
          }       
          fprintf(file, "%s\n", otvet[2].result);    
          fclose(file);
          memset(otvet[0].result,0,255);
          memset(otvet[1].result,0,255);
          memset(otvet[2].result,0,255);  
          file = fopen("laba7.txt", "r");
          if ((file = fopen("laba7.txt","r")) == NULL)
          {
            printf("Ошибка при открытии файла.\n");
            exit(1);
          }   
          while( fscanf(file, "%764[^\n]\n", vivod) == 1 )
          {
            printf("%s\n", vivod);
          }
          fclose(file);  		
	
	
printf("Хотите выйти из программы? 1 - Да 0 - Нет\n");
scanf ("%d", &exit1);
getchar();
}
return error;
}