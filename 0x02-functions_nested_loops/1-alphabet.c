#include "main.h"

/**
 * _print_alphabet - writes the alphabets from a to z to stdout
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	
	i = 97;
	while(i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return;
}
