#include "main.h"
#include <stdio.h>

/**
*_strcat -concatenates the string pointed to by @src to
*to end of the string pointed to by the @dest
*@dest: the string that will be appended
*@src: the string to be concatenates 
*
*Return: returns poineer to @dest
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
