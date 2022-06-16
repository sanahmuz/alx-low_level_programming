#include "main.h"

/**
 * _puts - prints string
 * @str: string
 * Return: void
 */

void_puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
