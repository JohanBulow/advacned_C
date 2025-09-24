#include <stdio.h> 
// example 1
enum Foo {
	foo_2 = 0, // explicity tell it is num 0
	foo_3,
	foo_4,
};

static int squares[] = {
	4,
	9,
	16,
};

// example 2

static int squares2[] = {
	[foo_2] = 4,
	[foo_3] = 9,
	[foo_4] = 16,
};

static const char case_convert[] = {
	['a'] = 'A',
	['b'] = 'B',
	['c'] = 'C',
};

int main(void) 
{ 
	printf("%d\n", squares[foo_2]);
	printf("%d\n", squares[foo_3]);
	printf("%d\n", squares[foo_4]);
	
	printf("%c\n", case_convert['a']);
	
	return 0;
}
