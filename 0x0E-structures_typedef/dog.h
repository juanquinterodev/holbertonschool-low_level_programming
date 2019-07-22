#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - define struct
 * @name: point to char
 * @age: years float
 * @owner: point to char
 */
struct dog
{
char *name;
float age;
char *owner;
};
int _putchar(char c);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
