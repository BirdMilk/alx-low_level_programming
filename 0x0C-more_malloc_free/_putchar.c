#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes character to stdout
 * @c: character to be printed out
 *
 * Return: on success 1.
 * on error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
