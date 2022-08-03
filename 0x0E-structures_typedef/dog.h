#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Discription: a structure used to hold the name, age, and owner of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
