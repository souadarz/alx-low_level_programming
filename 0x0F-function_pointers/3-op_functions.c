#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function that adds two integers
 * @a: first integer
 * @b: seconde integer
 *
 * Return:  returns the sum of a and b.
 */

int op_add(int a, int b);
{
	return (a + b);
}

/**
 * op_sub - function that calculs the difference of two integers
 * @a: first integer
 * @b: seconde integer
 *
 * Return:  returns the difference of a and b.
 */

int op_sub(int a, int b);
{
	return (a - b);
}

/**
 * op_mul - function that multilies two integers
 * @a: first integer
 * @b: seconde integer
 *
 * Return:  returns the product of a and b.
 */

int op_mul(int a, int b);
{
	return (a * b);
}

/**
 * op_div - function that multilies two integers
 * @a: first integer
 * @b: seconde integer
 *
 * Return: returns the result of division a by b.
 */

int op_div(int a, int b);
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of the division of two integers
 * @a: first integer
 * @b: seconde integer
 *
 * Return: returns the remainder of the division of a by b.
 */

int op_mod(int a, int b);
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
