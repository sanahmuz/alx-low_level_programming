#include "main.h"
/**
 * *_strspn - gets the length of a prefix substing.
 * @s: string being checked
 * @accept: char being matched
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, nmbr = 0;

	for (a = 0; s[a] >= '\0'; a++)
	{
		for (b = 0; accept[b] > '\0'; b++)
		{
			if (s[a] == accpet[b])
			{
				nmbr++;
			}
		}
		if (accept[b] == '\0')
		{
			break;
		}
	}
	return (nmbr);
}
