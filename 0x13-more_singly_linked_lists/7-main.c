#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&head, 00);
    add_nodeint_end(&head, 11);
    add_nodeint_end(&head, 22);
    add_nodeint_end(&head, 33);
    add_nodeint_end(&head, 44);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 2);
    printf(" solution is %d\n", node->n);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
