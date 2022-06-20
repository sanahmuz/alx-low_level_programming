#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: -ve integer, 0 or +ve integer if s1 is <=
 * or greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (diff == 0)
	{
		diff = *s1 - *s2;
		/*if onoe string empty: break*/
		if (*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	return(diff);
}
