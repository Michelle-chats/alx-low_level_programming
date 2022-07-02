#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * separated by ,, followed by a space
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m, o;

	for (n = 48; n <= 55; n++)
	{
		for (m = 48; m <= 56; m++)
		{
			for (o = 48; o <= 57; o++)
			{
				if (m > n && o > m)
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
