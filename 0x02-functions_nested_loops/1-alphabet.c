#include "main.h"

/**
 * print_alphabet - writes the alphabets from a to z to stdout
 *
 * Description : using ascii table to prints
 *
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
