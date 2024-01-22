#include <stdio.h>

int main() {
	const int LENGTH = 80;
	const int WIDTH = 24;
	const char NEWLINE = '\n';
	int area;

	area = LENGTH * WIDTH;
	printf("value of area : %d", area);
	printf("%c", NEWLINE);

	return (0);
}
