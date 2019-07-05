#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to s1 string
 * @s2: pointer to s2 string
 *
 * Return: pointer to the string dest
 */
int _strcmp(char *s1, char *s2)
{
int cs1;

for (cs1 = 0; s1[cs1] != '\0'; cs1++)
{
if (s1[cs1] == s2[cs1])
;
else
return (s1[cs1] - s2[cs1]);
}
return (0);
}
