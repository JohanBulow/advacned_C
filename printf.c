#include <stdio.h> 

int main(void) 
{
	// '%d' is called the conversion
	// some basic example
	printf("%d\n", -32);
	printf("%u\n", 32);
	printf("%.2f\n", 32.32123);
	int a = 1;
	printf("%p\n", &a);
	printf("%c\n", 'a');
	printf("%s\n", "hello");
	printf("%%\n");
	printf("%e\n", 12123123.123123); // scientific notiation
	printf("%g\n", 123.213123123123); 
	
	// writing to file	
	/*
	FILE *f = fopen("foo", "w");
	fprintf(f, "%d, %d\n", 3, 2);
	fclose(f);	
	*/

	char buf[10] = {0};
	snprintf(buf, 10, "%d, %d, %s", 3, 2, "HELLO WORLD");
	printf("%s\n", buf);

	

	return 0;
}
