#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, j, total, money;
	int coins[5] = {25, 10, 5, 2, 1};

	total = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("0\n");
		return (1);
	}
	for (j = 0; j < 5; j++)
	{
		i = money / coins[j];
		money -= i * coins[j];
		total += i;
		if (money == 0)
			break;
	}
	printf("%d\n", total);
	return (0);
}
