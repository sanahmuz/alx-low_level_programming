#include "main.h"
/**
 * find_sqrt - find sqrt by checking if no. is applicable
 * @n: no. to get squareroot of
 * @g: Guessing the parameter
 * Return: sqrt or -1
 */
int find_sqrt(int n, int g)
{
if (g * g == n)
{
return (g);
}
else if (g * g > n)
{
return (-1);
}
return (find_sqrt(n, g + 1));
}
/**
 * _sqrt_recursion - Finds the sqrt of no.
 * @n: no. to find sqrt
 * Return: square root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (find_sqrt(n, 1));
}
