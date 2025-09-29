#include <stdio.h> 
#include <string.h> 
#include <fnmatch.h> 
#include <glob.h> 


int errfunc(const char*epath, int eerrno)
{
	printf("Error for %s: %s:", epath, strerror(eerrno));
	return 0;
}

// fnmatch : match wildcard patterns on strings
// glob : match patterns, look at FS
int main(void) 
{
	char *t = "path/to/file";
	char *s = "hello, world!";
	// *, ?, [a-z/:alpha:/abcl/],  
	int result = fnmatch("path/*/file", t, FNM_NOESCAPE | FNM_PATHNAME | FNM_PERIOD);
	if (result == 0)
		printf("match\n");
	else if (result == FNM_NOMATCH)
		printf("no match");


	// glob is a bit more complex. Runs through all fiesl in working dir
	
	glob_t pglob;
	// GLOB_APPEND : chain globs :)
	//
	// function to call "hook function" after flags
	int result2 = glob("*.c", GLOB_MARK | GLOB_ERR | GLOB_NOCHECK | GLOB_NOESCAPE | GLOB_NOSORT, errfunc, &pglob);
	for (size_t i = 0; i < pglob.gl_pathc; i++)
		printf("%zu: %s\n", i, pglob.gl_pathv[i]);
	globfree(&pglob);

	// result2 is 0 if match
	// GLOB_NOMATCH 
	// GLOB_ABORT
	// GLOB_NOSPACE
	return 0;
}
