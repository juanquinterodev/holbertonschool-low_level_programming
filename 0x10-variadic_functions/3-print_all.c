#include <stdarg.h>
#include <stdio.h>
/**
* print_all - function that prints all
*@format: arguments passed to function
*
*Return: Nothing
*/
void print_all(const char * const format, ...)
{
	va_list all;
	int i = 0;
	char *string;

	va_start(all, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(all, int));
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(all, double));
				break;
			case 's':
				string = va_arg(all, char *);
				if (string != NULL)
				{
					printf("%s", string);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 's' || format[i] == 'i'
			|| format[i] == 'f') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	va_end(all);
	printf("\n");
}
