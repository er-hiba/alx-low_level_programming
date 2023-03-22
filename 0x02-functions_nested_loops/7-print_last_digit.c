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

	_putchar(ld);	
	return (ld);
}
