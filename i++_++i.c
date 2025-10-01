#include <stdio.h> 

int main(void) 
{
	int xs[] = {1, 2, 3, 4, 5, -1};
	int i = 0;
	while (xs[i] != -1)
	{
		int x = xs[++i];
		//int x = xs[i++];
		printf("%d\n", x);
	}
	
	return 0;
}
