#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers[C
*@argc:parameter
*@argv: an array pointed to string
*Return: zero
*/

int main(int argc, char *argv[])
{
	int sum = 0, num, i, j, k;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
