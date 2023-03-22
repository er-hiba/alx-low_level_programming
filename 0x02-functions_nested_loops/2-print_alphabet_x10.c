#include <stdio.h>
/**
 * print_alphabet_x10 - Prints 10 times lowercase alphabets
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 1;
	
	while(i<10)
	{	
		for(letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
		i++;
	}
}
