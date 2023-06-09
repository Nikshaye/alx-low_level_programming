#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array on a new
 * @array: array
 * @size: how many to print
 * @action: pointer is to print in regular
 * Return: void
 */
void array_iterator(int *array, size_t size, void (action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
