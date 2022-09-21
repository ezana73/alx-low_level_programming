#include "main.h"

/**
 * string_toupper - change all lowercase letters a string to uppercase
 * @str: parameter
 * Return: returns a character
 */

char *string_toupper(char *)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}
