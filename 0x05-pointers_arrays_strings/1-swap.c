#include "holberton.h"
/**
 * swap_int - swap the values of two integers
 * @a: value a
 * @b: value b
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
