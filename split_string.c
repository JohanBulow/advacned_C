#include <stdio.h> 
#include <string.h>
#include <stdlib.h>



int main(void) 
{
	// different ways to split a string in C.
	char s[] = "1,2,3,4,5";
	char *token = strtok(s, ",");
	// does not handle empty fields ",,,"
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ",");
	}
	
	// ex 2
	//
	
	char s2[] = "1,2,,,3,4,5";
	char *s_ptr = s2;
	char *token2;
       	while ((token2 = strsep(&s_ptr, ",")) != NULL)
	{
		printf("%s\n", token2);
	}	
	return 0;
}
