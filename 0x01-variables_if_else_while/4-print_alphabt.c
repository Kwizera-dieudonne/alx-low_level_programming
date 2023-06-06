#include <stdio.h>
/**
 * main - print all alphabet except q and e
 * Return: 0 successfull
 *
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
