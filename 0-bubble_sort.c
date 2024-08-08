#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
bool bubbly = false;

if (array == NULL || size < 2)
return;

<<<<<<< HEAD
for (size_t i = 0; i < size - 1; i++)
=======
while (bubbly == false)
{
bubbly = true;
for (i = 0; i < len - 1; i++)
>>>>>>> 10e1c6f (0-bubble_sort.c, 0-O)
{
swapped = 0;
for (size_t j = 0; j < size - 1 - i; j++)
{
if (array[j] > array[j + 1])
{
<<<<<<< HEAD

temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;

=======
swap_ints(array + i, array + i + 1);
>>>>>>> 10e1c6f (0-bubble_sort.c, 0-O)
print_array(array, size);
bubbly = false;
}
}
<<<<<<< HEAD

if (swapped == 0)
break;
=======
len--;
>>>>>>> 10e1c6f (0-bubble_sort.c, 0-O)
}
}
