#include "main.h"

/**
 * _islower - wil check if character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 is character is lowercase , else reurn 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
