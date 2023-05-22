#ifndef dog_h
#define dog_h

/**
 * struct dog - Definining a new type of dog
 * @name: First element
 * @age: Second element
 * @owner: Third element
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Define a new typedef for dog
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
