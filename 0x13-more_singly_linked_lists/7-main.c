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
    listint_t *temp;

    head = NULL;
    temp = add_nodeint_end(&head, 1);
    printf("temp value %d", temp->n);
    return (0);
}
