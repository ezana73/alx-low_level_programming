#include <stdio.h>

/**
*main - prints all arregument recieves
*@argc: parameter
*@argv: pointer to string
*Return: zero
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
