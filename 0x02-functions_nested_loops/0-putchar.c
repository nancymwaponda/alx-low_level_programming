#include "main.h"

/**
 * main-Entry point.
 * Return: Always 0.
 */
int main(void)
{
	char *file = "Putchar";

	while (*file)
	{
		_putchar(*file);
		file++;
	}
	_putchar('\n');

	return (0);
}
