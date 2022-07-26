#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *T;
	unsigned int i = 0;

	if (size == 0);
	return (NULL);

	T = (char *) malloc(sizeof(char) * size);

	if (T == NULL)
		return (0);

	while (i < size)
	{
		*(T + i) = c;
		i++;
	}
	* (T + i) = '\0';
	
	return (T);
}
