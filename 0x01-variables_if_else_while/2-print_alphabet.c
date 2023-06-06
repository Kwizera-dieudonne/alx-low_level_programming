#include <stdio.h>
/**
 * main - print lowercase alphabet
 * Return: 0 success
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
