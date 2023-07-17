#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains the information of the dog
 * @name: carries name of the dog
 * @age: carries age
 * @owner: carries owner name
 *
 * Description: this structure containg the information about,
 * the dog name the owner name and the age of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
