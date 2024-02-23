#include <stdio.h>

/**
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	for(i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
