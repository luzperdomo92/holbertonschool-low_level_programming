#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * get_concat_size - function
 *@ac: int variable
 *@av: char variable
 * Return: concat_size
 */
int get_concat_size(int ac, char **av)
{
	int ac_i;
	char *arg;
	int arg_size;

	int concat_size;

	concat_size = 0;
	for (ac_i = 0; ac_i < ac; ac_i++)
	{
		arg_size = 0;
		arg = av[ac_i];
		while (arg[arg_size] != '\0')
		{
			arg_size++;
		}
		arg_size++;
		concat_size += arg_size;
	}
	concat_size++;
	return (concat_size);
}
/**
 * concat_args - function
 *@ac: int variable
 *@av: char variable
 *@concat:char variable
 * Return: no return
 */
void concat_args(int ac, char **av, char *concat)
{
	int ac_i;
	char *arg;
	int concat_i = 0;

	for (ac_i = 0; ac_i < ac; ac_i++)
	{
		arg = av[ac_i];
		while (*arg != '\0')
		{
			concat[concat_i] = *arg;
			concat_i++;
			arg++;
		}

		concat[concat_i] = '\n';
		concat_i++;
	}
	concat[concat_i] = '\0';
}
/**
 * argstostr - function
 *@ac: int variable
 *@av: char variable
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int concat_size;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	concat_size = get_concat_size(ac, av);
	concat = malloc(sizeof(int) * concat_size);
	if (concat == NULL)
	{
		return (0);
	}

	concat_args(ac, av, concat);

	return (concat);
}
