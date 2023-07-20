#include "sort.h"

/**
 * make_swap - a function that swaps two numbers
 * @a: first integer
 * @b: second integer
 * Author - Joyclare Cherono
 **/
void make_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - a function that sorts an array using selection sort
 * algorithm
 * @array: an array
 * @size: size of array
 **/

void selection_sort(int *array, size_t size)
{
	unsigned int j, k, pos_min_val;

	if (array == NULL || size < 2)
		return;

	for (j = 0; j < size; j++)
	{
		pos_min_val = j;
		for (k = j + 1; k < size; k++)
		{
			if (array[pos_min_val] > array[k])
				pos_min_val = k;
		}
		if (pos_min_val != j)
		{
			make_swap(&array[j], &array[pos_min_val]);
			print_array(array, size);
		}
	}
}
