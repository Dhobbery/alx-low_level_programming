#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c: the character
 * Return: 1if letter is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}