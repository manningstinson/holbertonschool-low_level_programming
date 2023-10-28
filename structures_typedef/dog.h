#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A data structure to represent information about a dog.
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * @breed: Breed of dog
 * Define a new type dog_t as an alias for the type struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
	char *breed;
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
