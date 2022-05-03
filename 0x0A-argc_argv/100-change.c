#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * change - finds least number of coins for change
 * @cash: money amount
 * Return: number of coins
 */

int make_change(int cash)
{

int total_coins = 0, twenty_fives = 0, tens = 0, fives = 0, twos = 0, ones = 0;

while (cash > 0)
{

if (cash >= 25)
{
cash = cash - 25;
twenty_fives = twenty_fives + 1;
}

else if (cash >= 10)
{
cash = cash - 10;
tens = tens + 1;
}

else if (cash >= 5)
{
cash = cash - 5;
fives = fives + 1;
}

else if (cash >= 2)
{
cash = cash - 2;
twos = twos + 1;
}

else
{
cash = cash - 1;
ones = ones + 1;
}

}

total_coins = twenty_fives + tens + fives + twos + ones;
return (total_coins);
}

/**
 * main - prints minimum number of coins to get change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{

int no_of_coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}

else if (atoi(argv[1]) < 0)
{
printf("0\n");
}

else
{
no_of_coins = make_change(atoi(argv[1]));
printf("%d\n", no_of_coins);
}

return (0);
}
