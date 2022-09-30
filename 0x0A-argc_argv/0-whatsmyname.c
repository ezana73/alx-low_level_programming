#include <stdio.h>

/**
*main - print name of file
*@argc: counts of arregument supplied
*@argv: array of pointer to string
*Return: zero
*/

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", *argv);
	return (0);
}
