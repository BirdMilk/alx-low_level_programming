#include <stdio.h>
#include <unistd.h>
/**
 * main - This program that prints out a line to the standard error
 * Return: 1(succes)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, ", stdout);
	fputs("2015-10-19\n", stdout);
	return (1);
}
