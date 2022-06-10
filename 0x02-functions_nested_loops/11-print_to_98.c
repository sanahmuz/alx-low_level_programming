#include <stdio.h>

/**
 * print_to_98 - Prints all natural nos fromm input to 98,
 * in order separated by comma followed by space.
 * @n: The no. to begin at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
		printf("%d, ", n++);
		printf("%d\n", n);
	}
}
