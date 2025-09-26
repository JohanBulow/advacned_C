#include <stdio.h> 

// you can have dollarsigns in name. :)
// legacy reasons
int main(void) 
{
	int foo$bar$ = 3;
	printf("%d\n", foo$bar$);
	return 0;
}
