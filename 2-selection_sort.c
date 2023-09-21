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
	int temp;

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
			temp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
