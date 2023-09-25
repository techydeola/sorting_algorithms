#include "sort.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * partition - a function that partitions the array
 * @A: pointer to the array
 * @lo: first index of the array
 * @hi: last index of the array
 *
 * Return: an index of the array
 */

int partition(int *A, int lo, int hi)
{
	int pivot = A[hi];
	int i = lo - 1;
	int j;

	for (j = lo; j <= (hi - 1); j++)
	{
		if (A[j] <= pivot)
		{
			i = i + 1;
			swap(&A[i], &A[j]);
		}
	}
	i = i + 1;
	swap(&A[i], &A[hi]);
	return (i);
}

/**
 * quick_sort_recursive - a recursive function for quick sort
 * @array: pointer to an array
 * @size: size of the array
 * @lo: first index of the subarray
 * @hi: last index of the subarray
 *
 * Return: nothing
 */

void quick_sort_recursive(int *array, size_t size, int lo, int hi)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi);

		print_array(array, size);

		quick_sort_recursive(array, size, lo, p - 1);
		quick_sort_recursive(array, size, p + 1, hi);

	}
}

/**
 * quick_sort - algorithm that sorts an array of elements
 * @array: pointer to an array
 * @size: size of the array
 *
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	/* This is an algorithm that sorts an array of elements */

	int lo = 0;
	int hi = size - 1;

	if (!array || size <= 1)
		return;
	if (lo >= hi || lo < 0)
		return;

	quick_sort_recursive(array, size, 0, size - 1);
}

/**
 * swap - a function that swaps two elements in an array
 * @x: pointer to the first element
 * @y: pointer to the second element
 *
 * Return: nothing
 */

void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}
