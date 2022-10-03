#include <stdio.h>
#include <string.h>
#include "main.h"

int main()
{
	int x = 23;
	int y = 46;
	int ans;

	ans = addNumbers(x, y);
	printf("X is %d, and Y is %d, sum is %d\n", x, y, ans);

	ans = subNumbers(x, y);
	printf("X is %d, and Y is %d, and subtraction is %d\n", x, y, ans);
	return (0);
}
