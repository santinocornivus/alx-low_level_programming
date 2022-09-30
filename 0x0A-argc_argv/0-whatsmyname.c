#include "main.h"
#include <stdio.h>

/**
 * main - prints its own program name followed by a new line
 * @argc: argument count of the arguments passed to the program
 * @argv: argument vector of strings (arguments passed to the program)
 *
 * Return: On success 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
