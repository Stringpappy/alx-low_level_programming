/*
 * File: 0-linear.c
 * Auth: Brennan D Baraban
 */

#include "search_algos.h"

/**
  * linear_search - function that searches for a value in an algorithm
  * @array: pointer to first element.
  * @size:  nu of ements in the array.
  * @value: value to search for.
  *
  * Return: 0 or 1.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t itr;

	if (array == NULL)
		return (-1);

	for (itr = 0; itr < size; itr++)
	{
		printf("Value checked array[%ld] = [%d]\n", itr, array[itr]);
		if (array[itr] == value)
			return (itr);
	}

	return (-1);
}
