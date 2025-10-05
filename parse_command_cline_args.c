#include <stdio.h>
#include <unistd.h>

// getopt example
// gcc parse_command_cline_args.c -O3 && ./a.out -a hello -b hello hello
// if want -- use getopt_long. Uses gnu standard, not posix
int main(int argc, char *argv[])
{
	int opt;
	while ((opt = getopt(argc, argv, "a:b")) != -1)
	{
		switch (opt)
		{
		case 'a':
			printf("Option a: %s\n", optarg);
			break;
		case 'b':
			printf("Option b:\n");
			break;
		case '?':
			printf("Unknown option: %c\n", optopt);
			break;
		default:
			fprintf(stderr, "Usage: %s [-a] [-b]\n", argv[0]);
			return 1;
		}
	}
	for (int index = optind; index < argc; index++)
	{
		printf("Non-option argument: %d: %s\n", index, argv[index]);
	}

	return 0;
}
