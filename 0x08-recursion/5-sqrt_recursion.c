#include "main.h"

/**
 * sqrt_a - return the natural square root
 * @n: input number
 * @c iterator
 *
 * Return: square root or -1
 */

int sqrt_a(int a, int b)
{
	if (a * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: input number
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
