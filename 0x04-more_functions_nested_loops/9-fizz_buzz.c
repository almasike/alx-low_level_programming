#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * description: prints the numbers 1 to 100 
 * fizz for multiples of 3, buzz for multiples of 5,
 * and fizzbuzz for multiple of both 
 * return: always 0
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
