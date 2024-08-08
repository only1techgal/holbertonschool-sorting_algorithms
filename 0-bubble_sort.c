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

for (size_t i = 0; i < size - 1; i++)
{
swapped = 0;
for (size_t j = 0; j < size - 1 - i; j++)
{
if (array[j] > array[j + 1])
{

temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;

print_array(array, size);

swapped = 1;
}
}

if (swapped == 0)
break;
}
}
