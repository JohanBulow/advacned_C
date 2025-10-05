#include <stdio.h>
#include <stdlib.h>
// add -trigraphs and ??=include<stdlib.h>
// removed in c23 :D
// some charaters used to not support all characters
// trigraph ??=  #
// replaced with digraphs
// <:  [
// :>  ]
// not useful at all :D
int main(void)
{
	int xs[] = {1, 2, 3};
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", xs[i]);
	}
	printf("%d\n", 1 ? 42 : 777);
	return 0;
}
