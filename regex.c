#include <stdio.h> 
#include <regex.h>
#include <assert.h>
#include <string.h>

// regerror for nicer errors. :) 
int main(void) 
{
	regex_t preg;
	assert(regcomp(&preg, "(ab*)(cb*)", REG_ICASE | REG_EXTENDED) == 0);
	
	int result = regexec(&preg, "abb", 0, NULL, 0);
	if (result == 0)
	{
		printf("match");
	}
	else if (result == REG_NOMATCH)
	{
		printf("no match");
	}

	regfree(&preg);
	return 0;
}
