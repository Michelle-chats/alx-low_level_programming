#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times of times
 */
void print_line(int n)
{
	if (n == 0)
		_putchar('\n');
	int a = 1;

	for (; a <= n; a++)
	{
		-putchar('_');
	}
	_putchar('\n');
}
