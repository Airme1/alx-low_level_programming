#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - contains main function
 * Return: 0 to end program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0 || n % 10 == 0)
	{
		printf("Last digit of %d is 0 and is 0", n);
	}
	else
		if (n % 10 > 5)
		{
			printf("Last digit of %d is %d and is greater than 5", n, n % 10);
		}
			else
				if (n % 10 < 6 && n % 10 != 0)
					printf("Last digit of %d is %d and is less than 6 and not 0", n, n % 10);
	printf("\n");
	return (0);
}
