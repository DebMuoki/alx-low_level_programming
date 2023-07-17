#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog's basic infor
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 **/


struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
