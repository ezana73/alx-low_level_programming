#include "main.h"

/**
*print_triangle - prints triangle using character
*@size: parameter
*Return: return nothing
*/

void print_triangle(int size)
{
int hash, index;

if (size > 0)
{
for (hash = 1; hash <= size; hash++)
{
