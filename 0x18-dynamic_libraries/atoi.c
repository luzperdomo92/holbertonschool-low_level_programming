#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted.
 * Return: a number
 */


int _atoi(char *s)
{
	int num, i, neg;

	neg = 1;
	i = num = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			neg = neg * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (num >= 0)
		{
			num = num * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			num = num * 10 - (s[i] - '0');
			i++;
		}
	}
	neg = neg * -1;
	return (num * neg);
}
