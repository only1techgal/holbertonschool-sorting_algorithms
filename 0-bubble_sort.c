#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 * the Bubble sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
int temp;
int swapped;

if (array == NULL || size < 2)
return;

do
{
swapped = 0;
for (size_t i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{

temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;


print_array(array, size);

swapped = 1;
}
}
} while (swapped);
}
