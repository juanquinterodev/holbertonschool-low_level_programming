#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code for Holberton School students.
 * @argc: count of arguments
 * @argv: vector with content of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc != 1)
{
	for (i = 1; argv[i]; i++)
	{
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
		else if (isdigit(*argv[i]) && atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
}
else
	printf("0\n");
return (0);
}
