#include "main.h"

/**
 * print_alphabet- Prints the alphabet, in lowercase, using _putchar- task 1
 * Return: 0, using void will return nothing.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}


