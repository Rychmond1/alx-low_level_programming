#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: length
 */

void print_diagonal(int n)
{
	for (i = 0; i < n; i++)
	{
		_putchar("\\");
		_putchar("\n");
	}
	_putchar("\\n");
}
