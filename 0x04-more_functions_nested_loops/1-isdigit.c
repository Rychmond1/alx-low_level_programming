#include "main.h"

/**
 * _isdidgit - checks whether digit or not
 * @c: argument
 * Return: 0 or 1
 */
int _isdigit(int c);
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
