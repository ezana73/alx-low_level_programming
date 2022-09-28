#include "main.h"

/**
*helperFunction - check if sqrt of number exist
*@num: number
*@pSqrt: possible sqrt of number
*
*Return: return sqrt of number of -1 for error
*/

int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}

/**
*_sqrt_recursion - return the natural sqrt of number
*@n: number of find square root
*
*Return: sqrt of number
*-1 if n does not have sqrt
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
