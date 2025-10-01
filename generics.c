#include <stdio.h> 

int	add_int(int a, int b)			{return a + b;}
float	add_float(float a, float b)		{return a + b;}
double	add_double(double a, double b)			{return a + b;}


int main(void) 
{
	int ai = 1, bi = 2;
	float af = 1.12, bf = 2.32;
	double ad = 1.32, bd = 2.64;

	printf("add_int(ai, bi) = %d\n", add_int(ai, bi));
	printf("add_float(af, bf) = %f\n", add_float(af, bf));
	printf("add_(a, b) = %\n", add_());
	return 0;
}
