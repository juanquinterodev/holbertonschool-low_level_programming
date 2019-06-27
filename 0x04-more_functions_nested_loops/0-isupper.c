#include "holberton.h"
/**
 * _isupper - checks the character is uppercase
 * @c: The character to print
 *
 * Return: if c is uppercase 1.
 * Otherwise, 0 is returned.
 */
int _isupper(int c)
{
if ((c > 64) && (c < 91))
return (1);
else
return (0);
}
