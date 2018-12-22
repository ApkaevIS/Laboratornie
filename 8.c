#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>

struct point
{
	double x,y;
};
struct oblast
{
	float x;
	float y;
};
float sluchainost(float l)
{
	float l1 = rand()%100;
	return l1;
}

struct oblast makepoint(float x, float y)
{
	struct oblast obl;
	obl.x = sluchainost(x);
	obl.y = sluchainost(y);
	return obl;
}
struct point makepoints(float x, float y, int F, int T, int J)
{
	struct point tochka[T];
	for(T=0;J != F;J++)
		{
			tochka[T].x = sluchainost(x);
			tochka[T].y = sluchainost(y);
			T = T+1;	
		}
	return tochka[T];
}

int kolvo(struct point tochka[T], struct oblast obl, int T, int r, int N)		
{
	if(sqrt(((tochka[T].x - obl.x)*(tochka[T].x - obl.x))+((tochka[T].y - obl.y)*(tochka[T].y - obl.y))) <= r)
		{
			N = N+1;
		}	
	return N;	
}
int proverka(int F, int J, int N, int T, struct point tochka[T],struct oblast obl, float x1,float x2,float y1,float y2)
{
	for(T=0;J != F;J++,T++)
	{	
		if(x1 <= tochka[T].x && x2 >= tochka[T].x && y1 <= tochka[T].y && y2 >= tochka[T].y)
			{
				N = kolvo(struct point tochka[T], struct oblast obl,T,r,N);
			}
	}		
		return N;
}				

int main()
{
	float r, l, x, y;
	float x1, x2, y1, y2;
	float start,end, res;
	char stt[255];
	int T = 1000,F,J = 0,N = 0;
	r = 10;
	struct oblast obl = makepoint(x,y);
	x1 = obl.x - r;
	x2 = obl.x + r;
	y1 = obl.y - r;
	y2 = obl.y + r;

	F = T;	
	J = 0;
	struct point tochka[T] = makepoints(x,y,F,T,J); 
	start = omp_get_wtime();	
	N = proverka(F, J, N, T, struct point tochka[T], struct oblast obl, x1, x2, y1, y2);
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
