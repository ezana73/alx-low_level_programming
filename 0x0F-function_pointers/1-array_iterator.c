#include <stdio.h>

/**
*array_iterator - func that executes fun given as a param
*@array: array of element
*@size: size fo array
*@action: function pointer.
*
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
