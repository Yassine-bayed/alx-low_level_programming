#include"main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * r = row, n = column, i = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int r, n, i;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (n = 1; n <= 9; n++)
		{
			i = (r * n);
			if ((i / 10) > 0)
			{
				_putchar((i / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((i % 10) + '0');

			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
