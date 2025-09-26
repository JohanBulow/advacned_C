#include <stdio.h> 
#include <assert.h>
#include <errno.h>
#include <string.h>

int main(void) 
{
	FILE *f = fopen("d111ollar.c", "r");
	// assert(f != NULL);

	if (f == NULL) {
		printf("%d\n", errno);
		perror("Prefix");
				
		// printf("%d: %s\n", errno, strerror(errno));
		return 1;
	}

	char c;
	while ((c = fgetc(f)) != EOF)
		fputc(c, stdout);
	
	
	return 0;
}
