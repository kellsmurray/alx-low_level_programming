#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Success or Error
 */

int main(int argc, char *argv[])
{
int prod;

if (argc == 3)
{
prod = atoi(argv[1]) * atoi(argv[2]);                                                                                                      
printf("%d\n", prod);
return (0);
}

else
{
printf("Error");                                                                                                                          
return (1);
}

}
