#include <stdio.h>
#include <time.h>
/**
 * main - This is a program that checks whether a value is negative or posotive
 * Return: 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	if (n == 0)
		printf("%d is zero", n);
	if (n < 0)
		printf("%d is negative");
	return (0);
}
