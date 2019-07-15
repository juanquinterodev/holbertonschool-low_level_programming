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

for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}
