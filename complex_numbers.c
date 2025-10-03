#include <stdio.h> 
#include <complex.h>

char *cfmt(double complex z)
{
	static char buf[256] = {0};
	double real = creal(z);
	double imag = cimag(z); 
	int write_size = 0;
	
	if (real != 0)
	{
		write_size = sprintf(buf, "%.1f", real);
		if (imag != 0)
			write_size += sprintf(buf + write_size, " + ");
	}
	if (imag != 0)
		sprintf(buf + write_size, "%.1fi", imag);
	return buf;
}


int main(void) 
{
	double complex z = 2 + 3*I;
	printf("z = %s\n", cfmt(z));
	printf("z_r = %.1f\n", creal(z));
	printf("z_i = %.1f\n", cimag(z));
	
	double complex z2 = 4 + 9*I;
	printf("z + z2 = %s\n", cfmt(z + z2));
	printf("z * z2 = %s\n", cfmt(z * z2));
	
	printf("cabs(z) = %.1f\n", cabs(z));
	printf("csin(z) = %s\n", cfmt(csin(z)));



	return 0;
}
