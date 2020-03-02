#include <stdio.h>
#include <stdlib.h>
/**
 * main - int variable
 *@argc: int variable
 *@argv: char vatiable
 * Return: zero.
 */
int main(int argc, char **argv)
{
	int coins[] = { 25, 10, 5, 2, 1 };
	int coin_move = 0;
	int amount;
	int change = 0;
	int coins_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount <= 0)
	{
		printf("%d\n", coins_count);
		return (0);
	}

	while (amount != change)
	{
		if (change + coins[coin_move] > amount)
		{
			coin_move++;
		}
		else
		{
			change += coins[coin_move];
			coins_count++;
		}
	}

	printf("%d\n", coins_count);
	return (0);
}
