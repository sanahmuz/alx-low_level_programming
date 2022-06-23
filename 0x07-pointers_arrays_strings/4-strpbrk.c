#include "main.h"
/**
 * *_strpbrk - searches a string for any of set of byte
 * @s: string
 * @accept: matching string
 * Return: '\0' or a pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;
	char *p;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
			b++;
		}
		a++;
	}
	return (0);
}
