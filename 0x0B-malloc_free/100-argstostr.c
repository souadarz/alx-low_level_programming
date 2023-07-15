#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * argstostr - function that concatenates
 *             all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	ptr = malloc(sizeof(char) * (ac + len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';
	return (ptr);
}
