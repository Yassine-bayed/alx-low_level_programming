#include "main.h"
/**
 * print_alphabet_x10 - writes the alphabets from a to z to stdout
 *
 * Description : using ascii table to prints
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	i = 97;
	c = 0;
	while (c < 10)
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		c++;
		i = 97;
	}
}
