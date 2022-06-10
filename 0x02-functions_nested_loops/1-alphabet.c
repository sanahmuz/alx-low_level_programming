#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 * Description: print alphabet in lowercase followed by new line
 * Returns nothing
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
