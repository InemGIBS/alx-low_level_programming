/**
 * _putchar - writes the character c to stdout
 * @c: The Character to Print
 *
 * Return: On Success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char ch)
{
	return (write(1, &c, 1));
}
