#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure name tag
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *);
void _strcpy(char *, char *);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
