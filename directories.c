#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>

#include <sys/types.h>
#include <dirent.h>

// open, read, close dir
int main(void)
{
	DIR *dir = opendir(".");
	errno = 0;
	struct dirent *entry;
	while ((entry = readdir(dir)) != NULL)
	{
		printf("Found file: %s\n", entry->d_name);
	}
	assert(errno == 0);
	closedir(dir);

	struct dirent **entries;
	int n = scandir(".", &entries, NULL, alphasort);
	if (n < 0)
	{
		perror("scandir");
		exit(1);
	}
	for (int i = 0; i < n; i++)
	{
		printf("ound file: %s\n", entries[i]->d_name);
		free(entries[i]);
	}
	free(entries);
	return 0;
}
