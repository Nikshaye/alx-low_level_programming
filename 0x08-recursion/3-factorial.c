#include "main.h"
/**
 * factorial - returns a factorial of the number
 * @n: number is to return in the factorial form
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return(-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
