#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 *
 * @a: first pointer
 * @b: second pointer
 *
 * Return: (0)
 */

void swap_int(int *a, int *b)
{
	int empty;
	int *c = &empty;

	*c = *a;
	*a = *b;
	*b = *c;
}
