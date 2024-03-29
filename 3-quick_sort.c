#include "sort.h"

/**
 * swap - a function that swaps two numbers
 * @a: first number
 * @b: second number
 * Author - Joyclare Cherono
 **/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - a function that splits array around pivot
 * @arr: an array
 * @first: first element
 * @last: last element
 * @size: size
 * Return: i
 */
int partition(int *arr, int first, int last, size_t size)
{
	int pivot = arr[last];
	int i = first;
	int k;

	for (k = first; k < last; k++)
	{
		if (arr[k] <= pivot)
		{
			swap(&arr[i], &arr[k]);
			if (i != k)
				print_array(arr, size);
			i++;
		}
	}
	swap(&arr[i], &arr[last]);
	if (i != k)
		print_array(arr, size);
	return (i);
}

/**
 * quickSort - a function that sorts a part of the list
* @arr: array
 * @first: first element
 * @last: last element
 * @size: size
 * Return: nothing
 */
void quickSort(int *arr, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(arr, first, last, size);
		quickSort(arr, first, pivot - 1, size);
		quickSort(arr, pivot + 1, last, size);
	}
}

/**
 * quick_sort - a function that quick sorts method array
 * @array: array
 * @size: size
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}
