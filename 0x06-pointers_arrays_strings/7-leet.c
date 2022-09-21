#include "main.h"

/**
 * leet - function that encode string
 * @str: a string that will be encoded
 * Return: encode string
 */

char *leet(char *)
{
	int index1 = 0, index2;
	char leet[8] = {'o','L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++index])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
			str[index1] - 32 == leet[index2])
				str[index1] = index2 + '0';
		}
	}
	return (str);
}
