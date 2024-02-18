#include <stdio.h>

#define SWAP(a, b)  { a ^= b; b ^= a; a ^= b;} while ( 0 )
#define PRINT_SWAP(y) printf(#y " is %d\n", a)

int main()
{
	int a = 10;
	int y = 5;
	int z = 4;

	if (a > 6)
	{
		SWAP(a, y);
	PRINT_SWAP(y);
	}
	else
	{
		SWAP(a, z);
	printf("After Swap with z: %d\n", a);	
	}
	return (0);
}
