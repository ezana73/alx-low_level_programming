#include <stdio.h>

/**
*main - prints a number of arguments passed in
*@argc: parameter
*@argv: pointer to string
*Return: zero
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
