#include "main.h"
#include "stdio.h"

/**
 *check_length -  prints length of str via recrsive function
 *@st: A pointer to an char that will be updated from src
 *@n: int to increment while counting length
 *Return: calls the function once more
 */


int check_length(char *st, int n)
{
	if (st[0] == '\0')
		return (0);
	if (st[n] == '\0')
	{
		return (n);
	}
	return (check_length(st, n + 1));
}


/**
 *_strlen_recursion -  calls the  recrsive function
 *@s: A pointer to an char that will be updated from src
 *Return: prints strlen
 */


int _strlen_recursion(char *s)
{
	return (check_length(s, 1));


}
