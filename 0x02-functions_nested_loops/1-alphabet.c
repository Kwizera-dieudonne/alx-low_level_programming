#include "main."
/**
 *print_alphabet - print alphabet in lowercase
 *Return: 0 (successful)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
