#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char lp;

	for (lp = 'a'; lp <= 'z'; lp++)
	{
		if (lp != 'e' && lp != 'q')
			putchar(lp);
	}

	putchar('\n');

	return (0);
}
