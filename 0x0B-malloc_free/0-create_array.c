#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a
 * specific char
 * @size: Size of the array to be initialized
 * @c: Specific char to intialize the array with
 *
 * Return: NULL if size is 0, or on function failure. Otherwise, a pointer
 * to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	index = 0;
	while (index < size)
	{
		array[index] = c;
		index++;
	}

	return (array);
}
