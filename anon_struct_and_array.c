#include <stdio.h> 

struct Vec2 {
	int x;
	int y;
};

int scale_sum(int scalar, struct Vec2 v)
{
	return scalar * v.x + scalar * v.y;
}

int sum(int xs[], int len){
	int s = 0;
	for (int i = 0; i < len; i++)
		s += xs[i];
	return s;

}

int main(void) 
{
	struct Vec2 v;
	v.x = 2;
	v.y = 3;
	printf("%d\n", scale_sum(4, v));
	
	// can embedd the struct in the function call itself 
	// save some space. :)
	printf("%d\n", scale_sum(5, (struct Vec2){2, 3}));

	// same for arrays (or any kind of data type.) 
	printf("%d\n", sum((int[]){1, 2, 3, 4, 5, 6, 7}, 7));
	return 0;
}
