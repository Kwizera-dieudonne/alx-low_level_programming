#include "main.h"
/**
 *_puts - put char on display
 *@str: string to display
 *
 *
 */
void _puts(char *str)
{
	while (str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
