#include <stdio.h>
/**
 * main-Print the string
 * Return: 0 (Successful)
 */
int main(void)
{
	printf("Size of a char: %dbytes(s)\n", sizeof(char));
	printf("Size of an int: %dbytes(s)\n", sizeof(int));
	printf("Size of a long int: %dbyte(s)\n", sizeof(long int));
	printf("Size of a long long int: %dbyte(s)\n", sizeof(long long int));
	printf("Size of a float: %dbyte(s)\n", sizeof(float));
	return (0);
}
