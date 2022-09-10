#include <stdio.h>
/**
 * main - main function execution
 * Return: 0 to terminate program
 */

int main(void)
{
	char lowercase  = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}
	putchar('\n');

	return (0);
} 
