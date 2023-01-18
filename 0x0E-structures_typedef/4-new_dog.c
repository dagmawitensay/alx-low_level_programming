#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * struct dog_t - new struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dogd
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;

	if (my_dog == NULL)
		return (NULL);
	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;
}
