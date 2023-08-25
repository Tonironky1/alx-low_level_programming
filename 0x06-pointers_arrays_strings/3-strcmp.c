#include "main.h"

/**
 * _strcmp - Compares pointer to  two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: (0) when its same
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int b = 0;

	for (i = 0; s1[i] != '\0' && b == 0; i++)
	{
	b = s1[i] - s2[i];
	}
	return (b);
}
