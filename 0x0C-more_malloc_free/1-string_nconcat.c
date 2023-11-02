#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concantenates n bytes of a string to another
 * @s1: the string to append to
 * @s2: the string to concatenate from
 * @n: the number of bytes from s2 to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		s = malloc(sizeof(char) * (l1 + n + 1));
	else
		s = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!s)
		return (NULL);

	while (i < l1)
	{
		s[i] = s1[1];
		i++;
	}

	while (n < l2 && 1 < (l1 + n))
		s[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}