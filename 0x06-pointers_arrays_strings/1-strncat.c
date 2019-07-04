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
int cs;

while (dest[cd] != '\0')
{
cd++;
}
for (cs = 0; cs < n && src[cs] != '\0'; cs++)
{
dest[cd + cs] = src[cs];
}
dest[cd + cs] = '\0';
return (dest);
}
