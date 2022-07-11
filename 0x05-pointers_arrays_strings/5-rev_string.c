#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	char *p_start, *p_end;

	p_start = s;
	p_end = p_start + strlen(s) - 1;

	for (; p_start < p_end; p_start++, p_end--)
	{
		tmp = *p_end;
		*p_end = *p_start;
		*p_start = tmp;
	}
}
