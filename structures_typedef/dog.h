#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type of struct
 * @name: what the dog is called
 * @age: years of the dog
 * @owner: who the dog belongs to
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
#endif

