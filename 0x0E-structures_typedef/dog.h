#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct that give info about a dog
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner og the dog
 *
 */

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
void free_dog(dog_t *d);
#endif /* _DOG_H_ */
