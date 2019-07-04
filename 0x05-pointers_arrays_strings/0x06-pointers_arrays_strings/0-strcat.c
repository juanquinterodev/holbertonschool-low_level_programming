#include "holberton.h"
/**
 * _ strcat - concatenate two strings
 * @dest: string to concatenate
 * @src: string to concatenate
 *
 * Return: no.
 */
char *_strcat(char *dest, char *src)
{
int cd = 0;
int cs = 0;
while (dest[cd] != '\0')
{
cd++;
}
while (src[cs] != '\0')
{
dest[cd + cs] = src[cs];
cs++;
}
dest[cd + cs] = 0;
return (dest);
}
