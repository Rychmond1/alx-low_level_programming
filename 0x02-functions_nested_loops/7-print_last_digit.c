#include "main.h"

/**
 * print_last_digit - print last digit of a num
 *
 * @n: integer to be used
 *
 * Return: last digit of int
 *
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
