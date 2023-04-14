#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - number of coins
 * @argc: arguments count
 * @argv: array of arrguments
 *
 * Return: number of coins in the change
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25,10,5,2,1};
	int change, count = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	i = 0;
	while (i < 5)
	{
		while (change >= coins[i])
		{
			change -= coins[i];
			count++;
		}
		i++;
	}

	printf("%i\n", count);
	return (0);
}
