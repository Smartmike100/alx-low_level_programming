#include "main.h"

/**
 *
 *print_alphabet - print alphabets a - z ten times
 *
 *Description: a function that prints alphabets a - z ten times,
 *followed by a new line.
 *
 *Return: return void
 *
 **/

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
