#include "main.h"

/**
 *set_string - sets the value of a pointer to a char
 *@s: pointer to pointer
 *@to: pointer char
 *
 * Desciption: function that sets the value of a pointer to a char
 * Return: nothings
 */

void set_string(char **s, char *to)
{
	*s = to;
}
