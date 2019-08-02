#include <stdio.h>
/**
* first_turtle - before the main
* Return: Nothing
*/
void first_turtle(void) __attribute__ ((constructor));

void first_turtle(void)
{
char *str1 = "You're beat! and yet, you must allow,";
char *str2 = "I bore my house upon my back!";

printf("%s\n%s\n", str1, str2);
}
