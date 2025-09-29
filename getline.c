#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h> 
#include <malloc.h> 
#include <sys/types.h>
#include <unistd.h>

int main(void) 
{
	FILE *file = fopen("dollar.c", "r");
	assert(file != NULL);
	
	// char *line = NULL;
	char *line = malloc(sizeof(char) * 2048);
	assert(line != NULL);
	size_t line_buffer_len = 2048; // same as the line
	ssize_t read_size = 0;
	while ((read_size = getline(&line, &line_buffer_len, file)) != -1)
	{
		// line[read_size - 1] = '\0';
		printf("%zu\n", malloc_usable_size(line));
		// printf("%s", line);
	}
	free(line);
	assert(feof(file));
	fclose(file);
	return 0;
}
