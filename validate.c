#include "monty.h"
/**
 * spacerem - remove spaces fronm a string input
 * It removes spaces from the beginning, if they exist
 * @str: string to remove
 * The string is to be an opcide given
 * Return: String without the spaces
 */
char *spacerem(char *str)
{
	int i = 0;
	if (str == NULL)
		return (NULL);
	

	while (str[i] != ' ')
	{
		i++;
	}
	return (str + i);
}
