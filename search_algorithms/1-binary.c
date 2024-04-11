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
  size_t l = 0;
  size_t r = size - 1;
  size_t m;

 while (l <= r)
 {
  m = 1 + (r - 1) / 2;
  if (array[m] < value)
  l = m + 1;
  if (array[m] > value)
  r = m - 1;
  else
  return (m);
 }
 return -1;
 }