#include <stdio.h>

/**
 * main - Prints single digit number base 10
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
