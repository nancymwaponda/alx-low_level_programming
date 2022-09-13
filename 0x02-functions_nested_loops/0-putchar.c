#include <stdio.h>
/**
 * _putchar-Writes a program that prints _putchar,
 * followed by a new line
 * Return: Always 0.
 */

int main(void)
{
	char ch{8} = "_putchar";
	int i = 0;

	char m;

	while (i <= 8)
	{
		m = ch{i};
		_putchar(m);
		i++;
	}
	_putchar('\n');
	return (0);
}

int _putchar(char m)
{
	return (write(1, &m, 1));
}


