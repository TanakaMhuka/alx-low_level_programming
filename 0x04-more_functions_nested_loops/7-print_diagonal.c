#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonals
 *@n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int park, num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (park = 1; park <= n; park++)
		{
			if (row > 1)
			{
				for (num_lines = 1; num_lines <= park - 1; num_lines++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
