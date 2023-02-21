#include "main.h"
/**
 * main - Prints _putchar followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char txt[] = "_putchar";
	int i;

	i = 0;
	while (txt[i] != '\0')
	{
		_putchar(txt[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
