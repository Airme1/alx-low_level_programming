/*
 * File: 3-puts.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @s: The string to be printed.
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
