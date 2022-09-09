#include<stdio.h>
/**
 * main -entry point
 *
 * function main - prints number 1 to 10
 *
 * Return: 0
 */
int main(void)
{
		int a = 0;

		for (; a < 10 ; a++)
			putchar('0' + a);
		putchar('\n');
		return (0);
}
