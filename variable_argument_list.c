#include <stdio.h> 
#include <stdarg.h>


int sum_all(int count, ...){
	va_list ap; // arg pointer
	va_start(ap, count);
	int sum = 0;
	for (int i = 0; i < count; i++) {
		int x = va_arg(ap, int);
		sum += x;
	}
	va_end(ap);
	return sum;
}

int main(void) 
{
	// like *args and **kwargs
	printf("%d\n", sum_all(3, 5, 6, 7));
	return 0;
}
