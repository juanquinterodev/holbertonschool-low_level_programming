#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *_strdup - duplicate a string
* @str: parameter received
* Return: Null otherwise the duplicated string
*/
char *_strdup(char *str)
{
char *c;
unsigned int i = 0;
unsigned int j;

if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
i++;
}
c = malloc(i + 1 * (sizeof(char)));

if (c == NULL)
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
c[j] = str[j];
}
c[j] = '\0';
return (c);
}
