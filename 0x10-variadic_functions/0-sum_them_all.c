#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* sum_them_all - add arguments
* @n: number arguments
*
* Return: sum
*/


int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum;

if (n != 0)
{

va_start(ap, n);         /* Initialize the argument list. */

sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(ap, int);    /* Get the next argument value. */

va_end(ap);                  /* Clean up. */
return (sum);
}
return (0);
}
