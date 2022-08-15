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
    int n;

    head = NULL;
    add_nodeint_end(&head, 10);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    n = pop_listint(&head);
    printf("solution 1 is- %d\n", n);
    print_listint(head);
    n = pop_listint(&head);
    printf("solution 2- %d\n", n);
    n = pop_listint(&head);
  printf("solution 2- %d\n", n);   
    n = pop_listint(&head);
 printf("solution 2- %d\n", n);
    n = pop_listint(&head);
 printf("solution 2- %d\n", n);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
