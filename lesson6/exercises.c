#include <stdio.h>

int main(void)
{
	/* 1 write a declaration for an array that will hold 50 type long values */
	long array[50];
	
	/* 2 Show a statement that assigns the value 123.456 to the 50th element in the array */
	array[49] = 123.456;

	/* 6 write a for statement to count from 1 to 100 by 3s */
	int i;
	for (i=1;i <= 100; i += 3)
	{
		printf("%d\n", i);
	}

	/* 7 write a while statement to count from 1 to 100 by 3s */
	i = 1;
	while(i < 100)
	{
		i +=3;
		printf("%d\n", i);
	}

	/* 8 write a do...while statement to count from 1 to 100 by 3s */
	i = 1;
	do
	{
		printf("%d\n", i);
		i += 3;
	}while(i <= 100);


	return 0;
}
