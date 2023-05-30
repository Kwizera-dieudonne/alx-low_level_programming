#include "main.h"
/**
 *print -rev - print string in reverse
 *@s: string to print
 *
 */
void print_rev(char *s)
{
	/*first find length of string*/
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;
	for (i = len -1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
