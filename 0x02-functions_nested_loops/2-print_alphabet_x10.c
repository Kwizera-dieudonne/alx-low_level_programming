#include "main.h"
/**
 *print_alphabet_x10 - print alphabet ten times
 *
 *Return: nothing
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
