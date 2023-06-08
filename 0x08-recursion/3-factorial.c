#include "main.h"
/**
 *facorial - return fact of mumber
 *@n: input
 *Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
