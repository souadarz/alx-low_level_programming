#include <stdio.h>

/**
 * main- combinaitions of three digits
 *
 * Description: print possible combinations of three digits
 * Return: 0
 */

int main(void)
{
	int n, m, l;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			for (l = m + 1; l <= '9'; l++)
			{
				putchar(n);
				putchar(m);
				putchar(l);

				if (n != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}

	putchar('\n');
	return (0);
}
