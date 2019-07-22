#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
struct dog
{

/*
 * struct dog - define struct
 * @name: point to char
 * @age: years float
 * @owner: point to char
 *
 * Description: define struct
 */

char *name;
float age;
char *owner;
}dog;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
