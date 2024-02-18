#include <stdio.h>
/**
 * main - Prints file name
 * Return: 0
 */
#define VER 1
int main(void)
{
#if VER == 1
	printf("FILE: %s\n", __FILE__);
#endif
return (0);
}
