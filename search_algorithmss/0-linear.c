#include "search_algos.h"

/**
 * linear_search - Searches a list sequenctially
 * @array: The list
 * @size: The length of the list
 * @value: The key
 * Return: 0
*/

int linear_search(int *array, size_t size, int value)
{
  size_t i;

  for (i = 0; i < size; i++)
  {
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    if (array[i] == value)
    return i;
  }
  return -1;
}