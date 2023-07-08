#include <stdio.h>
#include <stdlib.h>

/**
 * main - fonction that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int amount, numCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	numCoins += (amount / 25);
	amount %= 25;
	numCoins += (amount / 10);
	amount %= 10;
	numCoins += (amount / 5);
	amount %= 5;
	numCoins += (amount / 2) + amount % 2;
	printf("%d\n", numCoins);
	return (0);
}
