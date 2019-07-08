#include "holberton.h"
/**
 * *_memcpy - copy memory area
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: number of chars
 *
 * Return: pointer to the string dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
