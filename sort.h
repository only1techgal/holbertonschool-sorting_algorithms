#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 *
 * Description: Doubly linked list node structure
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/**
 * print_array - Prints an array of integers.
 * @array: The array to print.
 * @size: The size of the array.
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Prints a doubly linked list of integers.
 * @list: The list to print.
 */
void print_list(const listint_t *list);

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size);

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order using Insertion sort algorithm.
 * @list: A pointer to the pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list);

/**
 * selection_sort - Sorts an array of integers in ascending order using Selection sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
