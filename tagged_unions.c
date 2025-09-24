#include <stdio.h> 
#include <stdbool.h>
// simulate dynamically typed

enum tag {
	TAG_BOOL,
	TAG_INT,
	TAG_FLOAT,
};

// in gcc (not iso standard) you can remove value so d.f instead of d.value.f for example. :)
struct dynamic {
	enum tag tag;
	union {
		bool b;
		int i;
		float f;
	} value;
};

int main(void) 
{
	struct dynamic d;
	d.tag = TAG_INT;
	d.value.i = 42;
	switch(d.tag) {
		case TAG_BOOL: printf("bool: %d\n", d.value.b); break;
		case TAG_INT: printf("int: %d", d.value.i); break;
		case TAG_FLOAT: printf("float: %f", d.value.f); break;
	}
	return 0;
}
