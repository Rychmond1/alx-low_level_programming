#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - reverses a string
 * @s: string
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
