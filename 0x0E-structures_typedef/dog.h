#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a structure for a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the struct dog
 */
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
