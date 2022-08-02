#ifndef DOG
#define DOG

/**
 * struct dog - defines a new dog struct
 * dog_t: type definition for the type dog
 * @name: input name of the dog
 * @age: input age of the dog
 * @owner: the owner of the dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

