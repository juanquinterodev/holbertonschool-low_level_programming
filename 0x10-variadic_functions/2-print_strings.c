#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string give
 * @n: total of other args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *ptr;

	i = 0;

	if (separator == NULL)
		separator = "nil";
	va_start(ap, n);
	while (i < n)
	{
		ptr = va_arg(ap, char *);
		if (ptr == NULL)
			printf("%p", ptr);
		else
			printf("%s", ptr);
		if (i + 1 != n)
			printf("%s", separator);
		else
			printf("\n");
		i++;
	}
	va_end(ap);
}
