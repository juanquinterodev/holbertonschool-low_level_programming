#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: count of arguments
 * @argv: vector with content of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
if (argc > 1)
{
for (i = 0; argv[i] ; i++)
	printf("%s\n", argv[i]);
}
else
	printf("%s\n", argv[0]);
return (0);
}
