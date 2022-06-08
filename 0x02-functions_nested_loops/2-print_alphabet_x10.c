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
int repeat = 1;
char alphabets;

while (repeat <= 10)
	{
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
		_putchar(alphabets);
		}
	_putchar("\n");
	repeat++;
	}
}
	

