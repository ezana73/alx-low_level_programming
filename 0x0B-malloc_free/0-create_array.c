#include "main.h"
#include <stdlib.h>

/**
*create_array - craetes an array of chars and initializes with it
*a specific character
*@size: size of an array
*@c: character intialize array
*
*Return: NULL if fails or pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* check if malloc is successful */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);

}
