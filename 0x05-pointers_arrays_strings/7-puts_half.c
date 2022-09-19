#include "main.h"

/**
*puts_half -function that prints half the string
*
*@str: input string
*/

void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		printf(str[half]);
		half++;
	}
	printf('\n');
}

