#include <stdio.h> 

#define LEN 10
constexpr size_t len = 10;
static int xs[LEN] = {};
static int xs2[len] = {1, 2, 3, 4};

int main(void) 
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%d\n", xs2[i]);
	}
	return 0;
}
