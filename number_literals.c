#include <stdio.h> 
#include <stdint.h>

int main(void) 
{
	int a =  32;
	int b = 0xffaa33;
	int c = 0755; // file perm
	int d = 0b01010;
	
		/* prefer using 
	int32_t 
	int64_t 
	*/

	printf("%d\n", a);
	printf("%x\n", b);
	printf("%o\n", c);
	printf("%b\n", d);
	return 0;
}
