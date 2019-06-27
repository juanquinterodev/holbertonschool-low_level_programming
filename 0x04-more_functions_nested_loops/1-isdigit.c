#include "holberton.h"
/**
 * _isdigit - checks the character is digit
 * @c: The character to print
 *
 * Return: if c is digit 1.
 * Otherwise, 0 is returned.
 */
int _isdigit(int c)
{
if ((c > 47) && (c < 58))
return (1);
else
return (0);
}
