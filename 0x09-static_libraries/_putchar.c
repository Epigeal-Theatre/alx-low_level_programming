#include <unistd.h>
/**
 * _putchar - write c to standard output
 * @c: c to be printed
 * Return: 1 (success)
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
