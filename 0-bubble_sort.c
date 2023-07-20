#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - this is a function that sorts an array of integers
 * in ascending order
 * @array: array
 * @size: number of array
 * Author - Joyclare Cherono
 * Return: sorts new array
 */

void bubble_sort(int *array, size_t size)
{
	size_t j;
	size_t k;
	size_t flag;
	size_t temp;

	if (array == NULL || size == 0)
		return;

	for (j = 0; j < size; j++)
	{
		flag = 0;
		for (k = 0; k < size - j - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				flag = 1;
				print_array(array, size);
			}

		}
		if (flag == 0)
			break;
	}
}
