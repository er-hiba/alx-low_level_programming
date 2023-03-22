#include <stdio.h>
# include "main.h"
/**
 * print_last_digit - X
 * @n: X
 * Return: 0
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
