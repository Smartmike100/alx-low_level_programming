#include "main.h"

/**
 * print - print_alphabet_x10
 *Description : Printing alphabets x_10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
