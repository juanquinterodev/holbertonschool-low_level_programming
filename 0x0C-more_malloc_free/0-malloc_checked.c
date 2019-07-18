#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
    int *p;

    p = (int *)malloc(b * sizeof(int));
if (p == NULL)
{
exit (98);
}
    return (p);
}
