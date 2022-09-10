#include <stdio.h>
/**
*main - print the lower case alphabet
*
*Description: using this function
*Return: 0
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
	putchar(c);
}
putchar('\n')
return (0);
}
