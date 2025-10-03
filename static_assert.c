#include <stdio.h> 
#include <assert.h>

#define FOO 42
constexpr int foo = 42;

int main(void) 
{
	//int a = 1;
	//assert(a == 0);
	static_assert(42 == FOO, "FOO NOT EQUAL TO 42");
	static_assert(42 == foo, "FOO NOT EQUAL TO 42");
	return 0;
}
