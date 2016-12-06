/*Write a recursive function to take the value 3 to the power of another number.  For example, if 4 is passed, the function will reutn 81 */

#include <stdio.h>

int power;
int recursive_power(int);

int main(void)
{
	printf("\n\nThis program will calculate 3 to the power of x\n\nEnter a value for x\n");

	scanf("%d", &power);

	printf("The answer is %d", recursive_power(power));
	return 0;
}

int recursive_power(int power_of)
{
	if (power_of < 1)
	{
		return 1;
	}
	else
	{
		return (3 * recursive_power(power_of - 1));
	}
}
