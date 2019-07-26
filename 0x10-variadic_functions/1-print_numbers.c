#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers.
 * @separator: parameter
 * @n: number of int
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);         /* Initialize the argument list. */
if (n > 0)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if ((i != (n - 1)) && (separator != NULL))
printf("%s", separator);
}
va_end(ap);                  /* Clean up. */
}
printf("\n");
}
