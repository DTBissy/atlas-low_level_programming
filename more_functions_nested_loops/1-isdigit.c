#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for a digit 0 - 9
 * @c: function parameter
 * Return: 0
 */

int _isdigit(int c)
{
  /** these numbers are the ASCII numbers for 0 and 9 */
  if (c >= 48 && c <= 57)
    return (1);
  else
    return (0);
}
