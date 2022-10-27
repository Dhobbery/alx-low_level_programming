#include <stdio.h>

/**
 * main - print the alphabet a to z in reverse
 * Return: Always 0
 */
int main(void)
{
	char li;

	for (li = 'z'; li >= 'a'; li--)
		putchar(li);

	putchar('\n');

	return (0);
}
