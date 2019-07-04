#include "holberton.h"
/**
 * _strncat - concatenate two strings
 * @dest: string to concatenate
 * @src: string to concatenate
 * @n: bytes
 *
 * Return: no.
 */
char *_strncat(char *dest, char *src, int n)
{
int cd = 0;
int cs = 0;

while (dest[cd] != '\0')
{
cd++;
cs++;
}
cd = 0;
while (cd < n)
{
if (dest[cd] == 0)
{
break;
}
dest[cs] = src[cd];
cs++;
cd++;
}
return (dest);
}
