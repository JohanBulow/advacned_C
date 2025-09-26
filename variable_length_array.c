#include <stdio.h> 
#include <stdlib.h>
#include <alloca.h>
#define LENGTH

// vla, UNSANFE :D : do not use.
int main(void) 
{
	int length = 12;
	int xs[length]; // stack if not use CONSTANT
	for (int i = 0; i < length; i++)
		xs[i] = i * i;
	for (int i = 0; i < length; i++)
		printf("%d\n", xs[i]);
	return 0;
}
