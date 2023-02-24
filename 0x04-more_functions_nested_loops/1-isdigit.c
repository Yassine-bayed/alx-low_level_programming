#include "main.h"

/**
 * _isdigit -  checks for checks for a digit (0 through 9).
 * @c: c -  Variable
 * Return: Always 0.
 */
int _isdigit(int c)
{

	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
