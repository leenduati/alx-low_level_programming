include "main.h"
#include <string.h>

/**
 * puts2- prints out a string per postive index
 *@str : parameter passed*
 * Return: Always a (Success)
 */

void puts2(char *str)
{
        int a;
        int p;

        p = strlen(str);

        for (a = 0; a <= p; a = a + 2)
        {
                _putchar(str[a]);
        }
        _putchar('\n');
}
