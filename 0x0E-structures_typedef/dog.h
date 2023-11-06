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
 * print_dog - Prints information about a dog
 * @d: Pointer to the struct dog
 */
void print_dog(struct dog *d);
#endif /* DOG_H */
