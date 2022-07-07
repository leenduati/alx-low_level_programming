#include <stdio.h>

/**
 * main -Prints 1 is c is uppercase, else 0
 *
 * Return: Always a (Success)
 */


int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 5 == 0 && a % 3 == 0)
			printf("FizzBuzz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else
			printf("%d", a);
		printf(" ");
}
	printf("\n");
	return (0);
}
