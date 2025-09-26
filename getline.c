#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h> 
#include <malloc.h> 


int main(void) 
{
	FILE *file = fopen("dollar.c", "r");
	assert(file != NULL);
	
	char *line = NULL;
	size_t line_buffer_len = 0;
	while (getline(&line, &line_len, file) != -1)
	{
		printf("line='%s'\n", line);
	}
	free(line);
	assert(feof(file));
	fclose(file);
	return 0;
}
