#include <stdlib.h>
#include "main.h"

/**
*_calloc -allocates memory of of an array using malloc
*@nmemb: number of element in array
*@size: size of eleents array
*
*Return: NULL is size or nmem == 0
*NULL if malloc fail
*pointer to memory allocated if successful
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	voipd *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size)
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (p);
}
