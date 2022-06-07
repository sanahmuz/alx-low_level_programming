#include <stdio.h>
/**
 * main - my entry point
 * Description: Print all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char a;
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
