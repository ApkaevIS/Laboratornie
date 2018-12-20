#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>

int main()
{
	float r;
	float x1, x2, y1, y2;
	float start,end, res;
	char sta[255];
	char sty[255];
	char str[255];
	char stt[255];
	int T = 1000,I,F,J,N;
		struct point
		{
			double x,y;
		};
	struct point tochka[T];
	struct oblast
		{
			float x;
			float y;
		};
	struct oblast obl;	
	r = 10;
	obl.x = rand()%100;
	obl.y = rand()%100;
	x1 = obl.x - r;
	x2 = obl.x + r;
	y1 = obl.y - r;
	y2 = obl.y + r;

	I = T;
	F = I;
	J = 0;	
	for(T=0;J != F;J++)
		{
			tochka[T].x = rand()%100;
			tochka[T].y = rand()%100;
			T = T+1;	
		}
	J = 0;
	N = 0;
	start = omp_get_wtime();	
	for(T=0;J != F;J++,T++)
		{
			if(x1 <= tochka[T].x && x2 >= tochka[T].x && y1 <= tochka[T].y && y2 >= tochka[T].y)
				{
					if(sqrt(((tochka[T].x - obl.x)*(tochka[T].x - obl.x))+((tochka[T].y - obl.y)*(tochka[T].y - obl.y))) <= r)
						{
							N = N+1;
						}	
				}
		}	
	end = omp_get_wtime();	
	printf("Колличество точек в области %d\n", N);
	FILE *file;
	file = fopen("laba8.txt", "a+");
          if ((file = fopen("laba8.txt","a+")) == NULL)
          {
            printf("Ошибка при открытии файла.\n");
            exit(1);
          }
          fprintf(file,"%d\t %f\n", F, end-start);
          fclose(file);  
	printf("Work took %f sec. time.\n", end-start);				

	return N;
}		
