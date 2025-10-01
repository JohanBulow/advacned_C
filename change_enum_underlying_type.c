#include <stdio.h> 

enum foo : short {
	FOO_A,
	FOO_B
};

// specify underlying type
int main(void) 
{
	enum foo x = FOO_A;
	printf("sizeof(x) = %lu\n", sizeof x);
	return 0;
}
