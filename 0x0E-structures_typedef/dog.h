#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure description
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef too struct dog
 */
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
