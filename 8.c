#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>

struct point
{
	float x,y;
};
typedef struct point point;	
struct searchArea
{
	point center;
	int r;
};
typedef struct searchArea searchArea;
searchArea obl;
float getRandom()//функция которая делает рандомные числа
{
	float l = rand()%100;
	return l;
}

point makepoint()//функция которая делает рандомную точку для определения области
{
	obl.center.x = getRandom();
	obl.center.y = getRandom();
	return obl.center;
}
point makepoints(int F, int T, int J)//функция которая делает много рандомных точек
{
	point tochka[T];
	for(T=0;J != F;J++)
		{
			tochka[T].x = getRandom();
			tochka[T].y = getRandom();
			T = T+1;	
		}
	return tochka[T];
}

int kolvo(int T, point tochka[T], searchArea obl, int obl.r, int N)//функция которая подсчитывает расстояние между точками		
{
	if(sqrt(((tochka[T].x - obl.center.x)*(tochka[T].x - obl.center.x))+((tochka[T].y - obl.center.y)*(tochka[T].y - obl.center.y))) <= obl.r)
		{
			N = N+1;
		}	
	return N;	
}
int proverka(int F, int J, int N, int T, point tochka[T], searchArea obl, float x1,float x2,float y1,float y2)//функция проверки принадлежности области
{
	for(T=0;J != F;J++,T++)
	{	
		if(x1 <= tochka[T].x && x2 >= tochka[T].x && y1 <= tochka[T].y && y2 >= tochka[T].y)
			{
				N = kolvo(T, point tochka[T], searchArea obl, obl.r, N);
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
	obl.r = 10;
	searchArea obl.center = makepoint();
	x1 = obl.center.x - obl.r;
	x2 = obl.center.x + obl.r;
	y1 = obl.center.y - obl.r;
	y2 = obl.center.y + obl.r;

	F = T;	
	J = 0;
	point tochka[T] = makepoints(F,T,J); 
	start = omp_get_wtime();	
	N = proverka(F, J, N, T, point tochka[T], searchArea obl, x1, x2, y1, y2);
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
