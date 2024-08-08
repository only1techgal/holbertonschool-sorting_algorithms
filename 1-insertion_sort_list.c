#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a doubly linked list.
 * @node1: Pointer to the first node.
 * @node2: Pointer to the second node.
 */
void swap_nodes(listint_t *node1, listint_t *node2)
{
if (node1 == NULL || node2 == NULL || node1 == node2)
return;

listint_t *prev1 = node1->prev;
listint_t *next1 = node1->next;
listint_t *next2 = node2->next;

if (prev1)
prev1->next = node2;
node2->prev = prev1;
node2->next = next1;
if (next1)
next1->prev = node2;

node1->prev = node2;
node1->next = next2;
if (next2)
next2->prev = node1;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: Pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
if (list == NULL || *list == NULL)
return;

listint_t *current = (*list)->next;

while (current != NULL)
{
listint_t *key = current;
current = current->next;

while (key->prev != NULL && key->n < key->prev->n)
{
swap_nodes(key->prev, key);


if (key->prev == NULL)
*list = key;
}
}
}
