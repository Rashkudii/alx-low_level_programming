#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwword for 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
