#include "main.h"

/**
 * infinite_add - function add two number in stored
 * in string to a buffer
 * Assum that string is never empty and
 * the number always be positive or 0
 * assume there are only digits store in the number string
 * if result stored in the buffer
 * return the pointer to result
 * if the result cannot be stored in the buffer, return '0'
 * @n1: first number to be added
 * @n: second number to added
 * @r: store result
 * @size_r: size of the buffer
 * Return: returns pointer result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - adds a number stored in two string
 * @n1: the sring containing first number
 * @n2: the string containing second number
 * @r: buffer to store result
 * @r_index: current index buffer
 *
 * Return: if can store the sum-pointer to result not the sum -0
 */

char *infinite_add(char *n1, char *n2, char *r, int r_index)
{
	int sum, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens =  num / 10;
	}
}
