#include <stdio.h>
/**
 * main - print number of base 10
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
