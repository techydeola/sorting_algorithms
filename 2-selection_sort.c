#include "sort.h"
#include <stddef.h>

/**
 * selection_sort - this function sorts an integer of array using the
 *                  selection sort algorithm
 * @array: pointer to the array
 * @size: size of the array
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min_idx;

	if (array == NULL || size <= 1)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			selectionSwap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * selectionSwap - swaps the the data of of two index in an array
 * @x: pointer to the first index
 * @y: pointer to the second index
 *
 * Return: nothing
 */

void selectionSwap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}
