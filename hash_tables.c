#include <stdio.h>
#include <search.h>

void print_entry(const ENTRY *e)
{
	if (e == NULL)
	{
		printf("Entry is NULL\n");
		return;
	}
	printf("Key: %s, Data: %p\n", e->key, e->data);
}

int main(void)
{

	ENTRY entries[] = {
		{"key1", (void *)1},
		{"key2", (void *)2},
		{"key3", (void *)3},
		{"key4", (void *)4},
		{"key5", (void *)5},
		{NULL, NULL} // Sentinel to mark the end of the array

	};
	hcreate(30);

	for (int i = 0; entries[i].key != NULL; i++)
	{
		hsearch(entries[i], ENTER);
	}

	// ENTRY e = {.key = "key", .data = (void *)1};
	// ENTRY *result = hsearch(e, ENTER);
	// print_entry(result);

	for (int i = 0; entries[i].key != NULL; i++)
	{
		ENTRY e = {.key = entries[i].key, .data = NULL};
		ENTRY *result = hsearch(e, FIND);
		print_entry(result);
	}

	hdestroy();
	return 0;
}
