#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to 
 * the program.
 * @argc: number of arguments
 * @argv: arry of arguments
 *
 * Retrn: 0
 */

int main(int argc, char *argv[])
{
(void) argv; 
	printf("%d\n", argc - 1);

	return (0);
}
