#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	// len = _printf("Percent:[%%]\n");
	// len2 = printf("Percent:[%%]\n");

	len = _printf("hell is 100%% real\n");
	len2 = printf("hell is 100%% real\n");


	return (0);
}