#include "main.h"

/**
 * _abs -Check main
 * @r: An integre input
 * Description: This function returns absolute of a number
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
