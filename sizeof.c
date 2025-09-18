#include <stdio.h> 

#define ARRAY_LEN(a) (sizeof a / sizeof a[0])

int main(void) 
{
	int a = 1;
	int xs[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *xs_ptr = xs; 
	
	printf("%zu\n", sizeof xs);	
	printf("%zu\n", sizeof xs_ptr);
	printf("%zu\n", ARRAY_LEN(xs));

	return 0;
}
