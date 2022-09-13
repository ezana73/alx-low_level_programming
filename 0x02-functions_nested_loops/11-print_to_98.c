#include <stdio.h>

/**
*print_to_98 - print all natural number separate by coma
*
*@n: the number to begin couting at
*/
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while(n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
