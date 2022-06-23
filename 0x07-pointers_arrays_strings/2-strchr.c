#include "main.h"
/**
 * _strchr - locates a char in a string
 * @c: Char to be located
 * @s: string to be checked
 * Return: location of c
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
