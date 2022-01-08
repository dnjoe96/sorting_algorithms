#include "sort.h"

/**
 * bubble_sort - Sorting an array with the bubble sort algorithm
 *
 * @array: The unsorted array
 * @size: Size of the array
 * Return:  nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int x;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				x = *(array + j);
				array[j] = *(array + j + 1);
				array[j + 1] = x;
				print_array(array, size);
			}
		}
	}
}
