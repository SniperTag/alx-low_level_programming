#include "main.h"


/**
 * main - to check code
 * return: Always return 0.
 * *s - string
 */

void _puts_recursion(char *s)
{
	{
	if (*s == '\0')
	{
		_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
}
