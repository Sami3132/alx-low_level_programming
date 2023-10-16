#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char temp;
	int i, j, len;

	j = 0;
	len = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	len = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		temp = s[i];
		s[i] = s[len];
		s[len--] = temp;
	}
}
