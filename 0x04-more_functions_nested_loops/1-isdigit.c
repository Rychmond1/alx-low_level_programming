#include "main.h"

/**
 * _isdigit - checks whether digit or not
 * @c: argument
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
