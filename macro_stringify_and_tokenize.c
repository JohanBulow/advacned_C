#include <stdio.h> 

#define FOO(x, y) printf("%s + %s = %d\n", #x, #y, (x) + (y))
// can also tokenize the macro (token and not a value)
#define PREFIX(var_name) new_##var_name
// generics..?
#define GENERIC_ADD_FUNC(type) 			\
	type add_##type(type x, type y) {	\
		return x + y;			\
	}
GENERIC_ADD_FUNC(int) 
GENERIC_ADD_FUNC(long) 
GENERIC_ADD_FUNC(float) 


// macros to the next level and some cool meta prrogramming. :)
int main(void) 
{
	FOO(1, 2);

	int first = 123;
	int second = 234;
	FOO(first, second);

	int PREFIX(foo) = 123;
	printf("%d\n", new_foo);

	printf("%d\n", add_int(1, 2));
	printf("%f\n", add_float(1.123, 2.312));
	printf("%ld\n", add_long(1L, 221312321L));

	return 0;
}
