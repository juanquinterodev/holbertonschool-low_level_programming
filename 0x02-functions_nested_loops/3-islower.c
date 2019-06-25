#include "holberton.h"
/**
 * _islower - checks the character is lowercase
 * @c: The character to print
 *
 * Return: if c is lowercase 1.
 * Otherwise, 0 is returned.
 */
int _islower(int c)
{
if ((c > 97) && (c < 122))
return (1);
else
return (0);
}
