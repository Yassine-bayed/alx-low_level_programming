#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - a function that prints all natural numbers from q to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @q: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int q)
{
	if (q < 98)
	{
		while (q <= 98)
		{
			printf("%d", q);
			if (q != 98)
			{
				printf(", ");
			}
			q++;
		}
	}
	else if (q > 98)
	{
		while (q >= 98)
		{
			printf("%d", q);
			if (q != 98)
			{
				printf(", ");
			}
			q--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
