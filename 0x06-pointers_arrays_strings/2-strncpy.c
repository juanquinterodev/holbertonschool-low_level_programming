#include "holberton.h"
/**
 * *_strncpy - copy n string
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: number of chars
 *
 * Return: pointer to the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int cd;
for (cd = 0; cd < n && src[cd] != '\0'; cd++)
dest[cd] = src[cd];
for ( ; cd < n; cd++)
dest[cd] = '\0';
return (dest);
}
