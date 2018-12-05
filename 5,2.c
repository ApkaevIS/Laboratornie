#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
	
	int i,k,z,d;
	printf("Введите число\n");
	scanf("%d", &k);
	if(k-k != 0)
	{
		printf("Число не целое\n");
		exit(1);
	}	
	d = 10;
	i = 0;
	while(k>0)
	{
		z = k % d;
		if (z % 2 == 0)
		{
			i = i+1;
		}

		k = k / d;
	}
	printf("Колличество четных чисел %d\n", i);
	return i;
}			





