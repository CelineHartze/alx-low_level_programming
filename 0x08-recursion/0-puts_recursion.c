#include "main.h"

/**
 * _puts_recursion - Prints a string that is followed by a new line.
 * @s: The string that will be printed.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
