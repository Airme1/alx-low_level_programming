#include "main.h"

/**
 * _isupper- validates uppercase characters
 * Return: 1 if the character is upper, and 0 if not
 */

int _isupper(int c)
{
	if(c >='A' && c <= 'Z')
		return (1);
	else
		return (0);
}

