#include "main.h"

/**
 * rev_string - reverses a string input
 * @s: string
 * Return: reversed string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		i++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[1];
		s[i] = s[counter];
		s[counter] = rev;
	}
	return (rev);
}
