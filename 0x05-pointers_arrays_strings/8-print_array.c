#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		if (start != (n - 1))
			printf("%d, ", a[start]);
		else
			printf("%d", a[start]);
	}

	printf("\n");
}
