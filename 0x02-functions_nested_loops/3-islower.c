#include "main.h"

/**
 * _islower - Checks if character is lowercase.
 * @c: is checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
