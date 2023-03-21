#include <stdio.h>
/**
 * print_alphabet_x10 - Prints 10 times lowercase alphabets
 * Return: 0
 */
void print_alphabet_x10(void);
{
	char letter;
	
	for(letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter * 10);
	}
	putchar('\n');
}
