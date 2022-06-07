#include <stdio.h>
/**
 * main - my entry point
 * Description: prints lowercase alphabet in reverse
 * Return: 0
 * returns 0 at the end
 */

int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
