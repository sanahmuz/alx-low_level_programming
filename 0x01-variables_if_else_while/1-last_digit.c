#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - my entry point
 * Description: assign a random number to variable 'n'
 * Return: 0
 */
int main(void)
{
	int n;
	int 1_digit\n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1_digit = n % 10;

	if (1_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 1_digit);
	}
	else if (1_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, 1_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 1_digit);
	}
	return (0);
}
