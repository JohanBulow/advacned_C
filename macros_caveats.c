#include <stdio.h> 

#define FOO 2

#define ADD(x, y) (x + y)
#define MUL(x, y) ((x) * (y))

#define SUM_RANGE(start, end) {			\
	int sum = 0;				\	
	for (int x = (start); x < (end); x++) 	\
		sum += x; 			\
	printf("%d\n", sum); 			\	
}

int main(void) 
{
	int x = 5 * ADD(2, 3); // bad because of pre
	int y = 5 * MUL(2, 3 + 2);
	printf("%d\n", y); 

	// int sum = 20 (scope issue, add do-while (old C, can just use {}))
	SUM_RANGE(2, 10);
	return 0;
}
