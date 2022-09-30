#include <stdio.h>
#include <stdlib.h>

/**
*main -prints the minimum number of coins to make change for an amount of money
*@argc: parameter
*@argv: array pointed to string
*Return: zero
*/

int main(int argc, char *argv[])
{
	int num, j, result = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (0);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coin[j])
		{
			num -= coin[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
