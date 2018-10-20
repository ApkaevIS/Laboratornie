#include <stdio.h>
#include <math.h>

int main()
{
float F, G, Y, a, x;

printf ("Введите число a \n");
scanf ("%f", &a);
printf ("Введите число x \n");
scanf ("%f", &x);

G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x;
F = sinh(3*a*a+7*a*x+4*x*x);
Y = -atanh(30*a*a+37*a*x-4*x*x);

printf("G=%f\n",G);
printf("F=%f\n",F);
printf("Y=%f\n",Y);

return 0;
}
