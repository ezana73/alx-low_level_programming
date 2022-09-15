#include <stdio.h>
#include "main.h"

/**
*print_square - print square
*@size: parameter
*Return - return nothing
*/

void print_square(int size)
{
	int inc1, inc2;
	
	if (size > 0)
	{
		for (inc1 = 0; inc1 <= size; inc1++)
		{
			for (inc2 = 0; inc2 <= size; inc2++)
			{
				putchar('#');
			}
			if (inc1 == size - 1)
			{
				continue;
			}
			putchar('\n');
		}  
	}
	putchar('\n');
}
