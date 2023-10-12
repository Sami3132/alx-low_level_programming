#include "main.h"
/**
 *print_triangle - Prints a triangle
 *@size: sets the size of the triangle
 *
 *Return: nothing
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}

			for (k = size - i + 1; k <= size; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
