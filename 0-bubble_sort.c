#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - this function sorts an array using the
 *               bubble algorithm
 * @array: pointer to an array
 * @size: size of the array
 * Return - nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t swapped;

	for (i = 0; i < (size - 1); i++)
	{
		swapped = 0;

		for (j = 0; j < (size - i - 1); j++)
		{
			if (*array[j] > *array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(&array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
