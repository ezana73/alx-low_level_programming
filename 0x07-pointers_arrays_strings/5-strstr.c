#include "main.h"

/**
*_strstr - first occurence of subtrcting needle in the strin haystack
*@haystack: main str to be examined
**@needle: searching in haystack
*Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*declaring variable*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/* star while*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			srt2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
