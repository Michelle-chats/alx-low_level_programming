#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
<<<<<<< HEAD
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void; NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;
	char *cname;
	char *cowner;
	int len_name = 0;
	int len_owner = 0;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);

	if (name != NULL)
	{
		len_name = _strlen(name);
		cname = malloc(sizeof(char) * (len_name + 1));
		if (cname == NULL)
		{
			free(dog);
			return (NULL);
		}
		_strcpy(cname, name);
		dog->name = cname;
	}

	if (owner != NULL)
	{
		len_owner = _strlen(owner);
		cowner = malloc(sizeof(char) * (len_owner + 1));
		if (cowner == NULL)
		{
			free(cname)
			free(dog);
			return (NULL);
		}
		_strcpy(cowner, owner);
		dog->owner = cowner;
	}
	dog->age = age;
	return (dog);
}

/**
 * *_strcpy - copies string pointed to by src to the buffer pointed to dest
 * @dest: string destination
 * @src: string source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j = _strlen(src);

	for (i = 0; i <= j; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
=======
* new_dog - creates a new dog.
* @name: pointer to a char for name of dog
* @age: age of dog
* @owner: pointer to a char for owner of dog
* Return: pointer to a new dog of type dog_t
**/
dog_t *new_dog(char *name, float age, char *owner)
{
int nameLen, ownerLen, i;
dog_t *d1;

d1 = (dog_t *)malloc(sizeof(dog_t));
if (d1 == NULL)
return (NULL);
nameLen = ownerLen = 0;
while (name[nameLen++])
;
while (owner[ownerLen++])
;
d1->name = malloc(nameLen *sizeof(d1->name));
if (d1->name == NULL)
{
free(d1);
return (NULL);
}
for (i = 0; i <= nameLen; i++)
d1->name[i] = name[i];
d1->age = age;
d1->owner = malloc(ownerLen * sizeof(d1->owner));
if (d1->owner == NULL)
{
free(d1->name);
free(d1);
return (NULL);
>>>>>>> 43f32756328cbc67ae56da54bb24631e9f940358
}
for (i = 0; i <= ownerLen; i++)
d1->owner[i] = owner[i];
return (d1);
}