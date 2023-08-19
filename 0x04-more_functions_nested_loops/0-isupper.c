#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for upppercase or 0 for anything else
 */

int _isupper(int C)

{
	if (C >= 65 && C <= 90)
	{
		return (1);
	}
	return (0);
}
