#include "main.h"

/**
 * _print_rev_recursion - orints string in reverse
 * @s: pointer to string
 * *Returrn: void
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
