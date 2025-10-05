#include <stdio.h>

int main(void)
{
	int a = 10;
	int *ptr = &a;		  // pointer to int
	const int *cptr = &a; // pointer to const int
	cptr++;				  // valid: can increment pointer
	//(*cptr)++;                 // invalid: cannot modify value pointed to by cptr

	int *const cptr2 = &a; // const pointer to int
	(*cptr2)++;			   // valid: can modify value pointed to by cptr2
	// cptr2++;                 // invalid: cannot increment cptr2
	return 0;
}
