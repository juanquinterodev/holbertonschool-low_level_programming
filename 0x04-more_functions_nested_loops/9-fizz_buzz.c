#include "holberton.h"
#include <stdio.h>
/**
 * main -  multiples 3 and 5.
 *
 * Return: void
 */
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
if ((n % 3) == 0)
printf("Fizz");
else
if ((n % 5) == 0)
printf("Buzz");
}
else
printf("FizzBuzz");
}
printf("%d", n);
return (0);
}
