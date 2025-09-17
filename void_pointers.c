#include <stddef.h>
#include <stdint.h>
#include <stdio.h> 

int main(void) 
{
	int xs[5] = {1, 2, 3, 4, 5};

	int a = 3;
	void *p = &a;

	printf("%p\n", p);
	printf("%d\n", *(int*)p);
	

	return 0;
}
