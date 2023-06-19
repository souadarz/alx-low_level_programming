#include <stdio.h>

/**
 * main- combinaition of two two-digits
 *
 * Description: print possible combinations of two two-digits
 * Return: 0
 */

int main(void)
{
	int n, m, l, k, initialK;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (l = n; l <= '9'; l++)
			{
				if (n < l)
					initialK = '0';
				else
					initialK = m + 1;

				for (k = initialK; k <= '9'; k++)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(l);
					putchar(k);

					if (n == '9' && m == '8' && l == '9' && k == '9')
					{
						continue;
					}

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
