#include "main.h"
/**
 * _strspn - Checks characters in first segment of sting
 * @s: string to be checked
 * @accept: string to be checked against
 * Return: no. of matching chars
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accpet[j])
break;
}
return (i);
}
