#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == 0)
		return (0);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
