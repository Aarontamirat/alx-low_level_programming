#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: the name
 * @age: the age
 * @owner: is the owner
 * Description: This struct is for a dog
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

#endif /* Ending DOG_H */
