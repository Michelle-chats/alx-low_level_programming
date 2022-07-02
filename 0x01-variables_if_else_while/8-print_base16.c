#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 48; num < 58; num++)
		putchar(num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
