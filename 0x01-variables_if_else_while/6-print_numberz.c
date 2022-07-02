#include <stdio.h>

/**
 * main - prints all single digit
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
