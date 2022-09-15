#include <stdio.h>
#include "main.h"

/**
*print_number - print a number
*@n: the number
*/

void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
putchar('-');
num = -num;
}
if (n > 0)
{
print_number(n / 10);
}
putchar(n % 10 + '0');
}
