#include <stdio.h>

int main (void)
{
	int x = 10, y = 0;

	y = (x >= 1 && x <= 20) ? x : y;

	printf("y is equal to %d", y);

	return 0;
}
