#include <stdio.h> 

// Two ways of doing bitflags
//
// 1
typedef unsigned int t_flag;
#define FLAG_A (1 << 0)
#define FLAG_B (1 << 1)
#define FLAG_C (1 << 2)

// can also be done with enum (to avoid macro)

int f(int x, t_flag flags)
{
	if(flags & FLAG_A)
		x += x;
	
	// unset flag
	flags &= ~FLAG_A;

	return x;
}


int main(void) 
{
	printf("%d\n", f(1234, 0));
	printf("%d\n", f(1234, FLAG_A));
	printf("%d\n", f(1234, FLAG_A | FLAG_B));

	return 0;
}
