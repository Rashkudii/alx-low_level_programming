#include "main.h"

/**
 * cap_string - nction that capitalizes all words of a string.
 * @str: string to be capitalized.
 *
 * Return: changed string.
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index - 1] >= 'a' && str[index] <= 'z'))

			index++;

		if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '_' ||
		str[index - 1] == 'i' ||
		str[index - 1] == '?' ||
		str[index - 1] == '=' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}' ||
		index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);
}
