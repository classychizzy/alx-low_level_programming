#include "search_algos.h"
#include <stdlib.h>
/**
 *  linear_search- a function that uses linear search algorithm
 *  @array: pointer to the given array
 *  @size: the size of the array to be search
 *  @value: the value to be found in the array
 *  Return: -1 on failure, index of the value being searched
 *  on success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
