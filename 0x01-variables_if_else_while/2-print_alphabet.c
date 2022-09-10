#include <stdio.h>
/**
 * main - main function execution
 * Return: 0 to terminate program
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
