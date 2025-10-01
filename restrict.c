#include <stdio.h> 



void updatePtrs_restrict(size_t *restrict ptrA, size_t *restrict ptrB, size_t *restrict val)
{
	*ptrA += *val;
	*ptrB += *val;
}


void updatePtrs(size_t *ptrA, size_t *ptrB, size_t *val)
{
	*ptrA += *val;
	*ptrB += *val;
}


// specify to the compiler the pointer as func args, are pointing to unique values in memory.
// possible fewer compiler instructions, lets the compiler make opitmizations. :)
int main(void) 
{
	size_t a = 1, b = 2, c = 3;
	printf("init: a=%zu, b=%zu, c=%zu\n", a, b, c);
	updatePtrs(&a, &b, &c);

	printf("no restrict: a=%zu, b=%zu, c=%zu\n", a, b, c);
	
	a = 1, b = 2, c = 3;
	updatePtrs_restrict(&a, &b, &c);	
	printf("restroict: a=%zu, b=%zu, c=%zu\n", a, b, c);
	
	
	return 0;
}
