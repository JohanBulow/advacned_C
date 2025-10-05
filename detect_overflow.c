#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(void)
{
	int a = INT_MAX - 10;
	int b = 1123;
	int c;
	/* 	if (a > INT_MAX - b)
		{
			printf("Overflow detected when adding %d and %d\n", a, b);
			return 1;
		}
		if (a < INT_MIN - b)
		{
			printf("Underflow detected when adding %d and %d\n", a, b);
			return 1;
		} */

	bool overflow = __builtin_add_overflow(a, b, &c);
	if (overflow)
	{
		printf("Overflow detected when adding %d and %d\n", a, b);
		return 1;
	}
	/* 	int c = a + b; */

	printf("%d + %d = %d\n", a, b, c);
	return 0;
}
