#include <stdio.h>
#include "main.h"

/**
*_puts -print a string
* @str: string to print
*
*Description: print a string
*on success: return no error
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
	}
	putchar(10);
}
