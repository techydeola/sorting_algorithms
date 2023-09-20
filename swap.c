#include "sort.h"

/**
 * swap - swaps the the data of of two index in an array
 * @x: pointer to the first index
 * @y: pointer to the second index
 *
 * Return: nothing
 */

void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}
