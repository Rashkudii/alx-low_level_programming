#include "main.h"

/**
 * _isalpha - checks for alphabetic char
 * @c: char to be checked
 * Return: 1 for alphabetic char 0 otherwise
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{

return (1);
}
return (0);
}
