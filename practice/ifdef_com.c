#include <stdio.h>

#define VER 1
#define ADD(X) X+X
#define SUB(X) X-X


int main()
{
#if VER <= 1
	printf("This is for version1\n");
	int a = ADD(87);
	{
		printf("sum: %d\n", a);
	}
#endif
#if VER <= 2
	printf("This is for version2\n");
	int b = SUB(87);
	{
		printf("sum:%d\n", b);
	}
#endif
#if VER <= 3
	printf("This is for version3\n");
	printf("FILE :%s\n", __FILE__);
	printf("DATE :%s\n", __DATE__);
	printf("TIME :%s\n", __TIME__);
	printf("LINE :%d\n", __LINE__);
	printf("ANSI :%d\n", __STDC__);
#endif
#if VER <= 4
	printf("This is for version4\n");
#endif
}
