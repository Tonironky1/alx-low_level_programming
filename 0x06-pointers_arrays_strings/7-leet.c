#include "main.h"

/**
 * leet - function that encode a string
 * @str: String that will be encoded
 * Return: returns encoded string
 */

char *leet(char *str)

{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; c[j] != '\0'; j++)
	{
	if (str[i] == c[j])
	{
	str[i] = d[j];
	}
	}
	}
	return (str);
}
