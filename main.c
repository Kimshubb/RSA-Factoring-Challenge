#include "factors.h"
/**
 * main - entry point
 * @argc - argument count
 * @argv - arguments arrary
 * return 0 if success -1 if failure
 */
int main(int argc, char *argv[])
{
	int n; 
	char line[100];
	char *filename = argv[1];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		return 1;
	}
	FILE *file = fopen(filename, "r");

	if (!file)
	{
		perror("Error opening file");
		return 1;
	}
	while (fgets(line, sizeof(line), file))
	{
		n = atoi(line);

		if (n <= 1)
		{
			printf("Invalid input: %d\n", n);
		}
		else
		{
			factorize(n);
		}
	}
	fclose(file);
	return 0;
}
