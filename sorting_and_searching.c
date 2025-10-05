#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bsd/bsd.h> // for merge sort

#define ARRAY_LEN(x) (sizeof(x) / sizeof((x)[0]))
int compare_strings(const void *a, const void *b)
{
	const char *str1 = *(const char **)a;
	const char *str2 = *(const char **)b;
	return strcmp(str1, str2);
}

int compare_ints(const void *a, const void *b)
{
	int int1 = *(const int *)a;
	int int2 = *(const int *)b;
	return (int1 > int2) - (int1 < int2);
}

// add -lbsd flag for bsd
int main(void)
{
	char *strings[] = {"hello", "bonjour", "ola", "hallo", "bom dia"};
	int xs[] = {1, 5, 2, 8, 7};

	printf("Before sorting:\n");
	for (size_t i = 0; i < ARRAY_LEN(strings); i++)
	{
		printf("%zu: %s\n", i, strings[i]);
	}
	qsort(strings, ARRAY_LEN(strings), sizeof(char *), compare_strings);
	printf("After sorting:\n");
	for (size_t i = 0; i < ARRAY_LEN(strings); i++)
	{
		printf("%zu: %s\n", i, strings[i]);
	}

	printf("Before sorting:\n");
	for (size_t i = 0; i < ARRAY_LEN(xs); i++)
	{
		printf("%zu: %d\n", i, xs[i]);
	}
	qsort(xs, ARRAY_LEN(xs), sizeof(int), compare_ints);
	printf("After sorting:\n");
	for (size_t i = 0; i < ARRAY_LEN(xs); i++)
	{
		printf("%zu: %d\n", i, xs[i]);
	}

	// can just replace qsort with mergesort

	mergesort(xs, ARRAY_LEN(xs), sizeof(int), compare_ints);
	// heapsort(xs, ARRAY_LEN(xs), sizeof(int), compare_ints);
	printf("After merge sorting:\n");
	for (size_t i = 0; i < ARRAY_LEN(xs); i++)
	{
		printf("%zu: %d\n", i, xs[i]);
	}

	// binary search
	int key = 7;
	int *found = bsearch(&key, xs, ARRAY_LEN(xs), sizeof(int), compare_ints);
	if (found)
	{
		printf("Found %d at index %ld\n", key, found - xs);
	}
	else
	{
		printf("%d not found\n", key);
	}
	return 0;
}
