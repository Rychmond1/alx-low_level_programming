#include "main.h"
/**
 * _islower - fuction to check if lowercase
 * @c: is the aargument
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
