#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main()
{
    char str[] = "_putchar";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }
    putchar('\n');
    return 0;
}

