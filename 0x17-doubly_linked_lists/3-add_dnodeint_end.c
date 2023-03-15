#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 * @n: integer value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *current;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize the new node */
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Otherwise, traverse the list to the end */
    current = *head;
    while (current->next != NULL)
        current = current->next;

    /* Append the new node to the end of the list */
    current->next = new_node;
    new_node->prev = current;

    return (new_node);
}
