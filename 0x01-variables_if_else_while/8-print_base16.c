#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char lett;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (lett = 'a'; lett <= 'f'; lett++)
	{
		putchar(lett);
	}

	putchar('\n');

	return (0);
}
