#include "main.h"
/**
 *_puts - put char on display
 *@str: string to display
 *
 *
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
