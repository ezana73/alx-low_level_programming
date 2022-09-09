#include <stdio.h>
/**
*main - print all single digit numbers of base 10 starting from 0
*
*Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
