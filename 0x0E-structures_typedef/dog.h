#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure dog
 * @name: atribute pointer to char name's dog
 * @age: atribute float age's dog
 * @owner: atribute pointer to char owner's dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

#endif
