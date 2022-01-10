#include "sort.h"

/**
 * selection_sort - Sorting an array with the selection sort algorithm
 *
 * @array: array to sort
 * @size: Size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int x;

	for (i = 0; i < size; i++)
	{
		min_idx = i;

		for (j = i; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (array[i] > array[min_idx])
		{
			x = *(array + i);
			array[i] = *(array + min_idx);
			array[min_idx] = x;
			print_array(array, size);
		}
	}
}
