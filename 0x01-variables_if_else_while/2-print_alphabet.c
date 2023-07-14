#include <stdio.h>
/**
 * main -This program prints the alphabet.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 1;
	while (i <= 26)
	{
		putchar(alp[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
