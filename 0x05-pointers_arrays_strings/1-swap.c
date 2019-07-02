#include "holberton.h"
/**
 * swap_int - swap the values of two integers 
 * @n: value
 *
 * Return: no.
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
