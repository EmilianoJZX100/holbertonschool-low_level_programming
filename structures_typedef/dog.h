#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type of struct
 * @name: what the dog is called
 * @age: years of the dog
 * @owner: who the dog belongs to
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

