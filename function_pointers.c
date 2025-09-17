#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int foo(int x, int y) {
	return x+y;
}

bool p(int x) {
	return x % 2 == 0;
}

void print_if(int xs[4], bool (*predicate)(int))
{
	for (int i = 0; i < 4; i++)
	{
		if (predicate(xs[i]))
		{
			printf("%d\n", xs[i]);
		}
	}
}

int compar(const void *x1, const void *x2)
{
	return (*(int*)x1) - (*(int*)x2);
}


int main(void) {
	// example 1: function pointer
	int (*f)(int, int) = foo;
	printf("%d\n", f(3,4));

	// example 2 : print % 2 numbers (hook into function)
	int xs[] = {1, 2, 3, 4};	
	print_if(xs, p);


	// example 3 : compare function (qsort)
	int xt[] = {2, 1, 3, 4, 6, 5, 7, 8, 10, 9};
	
	qsort(xt, 10, sizeof(int), compar);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", xt[i]);
	}
	
	return 0;
}
