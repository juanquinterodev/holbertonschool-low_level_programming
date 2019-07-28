#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Function that prints strings followed by new line
*@separator: is the string to be printed between the strings
*@n: number of strings passed to the function
*
*Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *ptr;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(str, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if ((i != (n - 1)) && (separator != '\0'))
			printf("%s", separator);
	}

	va_end(str);
	printf("\n");
}
