#include "main.h"

/**
 * prime_number - determine if an integer is a prime number
 * @k: test number
 * @x: number to be tested
 *
 * Description: determine if an integer is a prime number
 * Return: 1 if x is a prime number, otherwise 0
 */

int prime_number(int k, int x)
{
	if (x < 2 || k > x)
		return (0);

	if (x % k != 0)
		return (1);

	else
		return (0);
	return (prime_number(k + 1, x));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: numbe to be tested
 *
 * Description: function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * Return: 1 if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (prime_number(2, n));
}
