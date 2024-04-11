#include "search_algos.h"

/**
 * binary_search - Conducts a binary search
 * @array: The list
 * @size: The length of the list
 * @value: The key
 * Return: 0
*/
int binary_search(int *array, size_t size, int value)
{
  size_t i;
  size_t l = 0;
  size_t r = size - 1;
  int m;

  if (array == NULL)
    return (-1);

 while (l <= r)
 {
  m = (l + r) / 2;
  printf("Searching for array: ");
  for (i = l; i <= r; i++)
  {
    if (i != r)
    printf("%d, ", array[i]);
    else
    printf("%d", array[i]);
  }
  printf("\n");

  if (array[m] < value)
  l = m + 1;
  else if (array[m] > value)
  r = m - 1;
  else if (array[m] == value)
  return (m);
 }
 return (-1);
 }
