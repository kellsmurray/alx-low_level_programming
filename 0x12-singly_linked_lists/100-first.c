#include "lists.h"

void __attribute__((constructor)) before_main(void);

/**
 * before_main - print before the main function
 * Return: void
 */

void before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
