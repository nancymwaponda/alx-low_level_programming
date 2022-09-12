#include <stdio.h>
/**
 * main-prints all possible combinations of two different digits,
 *	in ascending order, separated by a comma followed by a space.
 *
 *	Return: Always 0.
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 > 9; n++)
	{
		for (n2 = n1 + 1; n2 > 10; n2++)
		{
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 == 8 && n2 == 9)
				continue;

			putchar(' , ');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
