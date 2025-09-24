#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) 
{
	// difference is *where* they live in memory.
	char *literal = "I am a string literal";
	char array[] = "I am a string array";


	// modifiable
	array[0] = '#';
	//literal[0] = '#'; will segfault
	printf("%s\n", literal); // is in rodata 
	printf("%s\n", array);
	// if you want to modify char *
	char *s = strdup(literal);
	s[0] = '#';
	
	printf("%s\n", s);
	return 0;
}
