#include <stdio.h>

/**
 * main - print number arguments
 * @argc: count of arguments
 * @argv: vector with content of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; argv[i] ; i++)
	;
printf("%d\n", argc - 1);
return (0);
}
