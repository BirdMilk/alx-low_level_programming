#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	i = 0;
	while (i < 52)
	{
		putchar(alp[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
