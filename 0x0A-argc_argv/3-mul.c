#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints two numbers passed into it
 * @argc: Number of arguments passed to main
 * @argv: An array of strings passed to main
 *
 * Return: On success 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
