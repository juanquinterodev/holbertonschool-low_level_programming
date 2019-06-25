#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: compute if is negative
 *
 * Return: n
 */
int _abs(int n)
{
int x;
if (n >= 0)
{
return (n);
}
else
{
x = n * -1;
return (x);
}
}
