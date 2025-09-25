#include <stdio.h> 

#define FOO(x, y) printf("%s + %s = %d", #x, #y, (x) + (y))

// macros to the next level and some cool meta prrogramming. :)
int main(void) 
{
	FOO(1, 2);
	return 0;
}
