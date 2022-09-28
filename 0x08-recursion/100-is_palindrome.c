#include "main.h"

/**
*_length - check the length of the string
*@s: the string
*Return: the length of string
*/

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
*checkp - if the string is palindrome
*@i: is the index
*@lg: is the length of the string
*@s: the string
*Return: 1 if its palindrome. 0 if not
*/

int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
*is_palindrome - check if the string is palindrome
*@s: the string
*Return: 1 if its palindrome, 0 if not
*/

int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
