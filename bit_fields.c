#include <stdio.h> 

// | 4 bits | 4 bits | 1 bit | 7 bits |
// ipv4 header comp fields (think)
struct foo {
	int first_4 : 4;
	int next_4  : 4;
	int single  : 1;
	int rest    : 7;
};


int main(void) 
{
	printf("%zu\n", sizeof(struct foo));
	struct foo f;
	f.first_4 = 2;
	printf("%d\n", f.first_4);

	// example
	// int fd = open(...);
	// read(fd, f, sizeof f);
	return 0;
}
