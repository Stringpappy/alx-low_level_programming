#include "search_algos.h"

/**
  * binary_search - func that  Searches for a value in a sorted array
  * @array: pointer to the first element
  * @size: num of element of  rray.
  * @value: value to search for.
  *
  * Return: 0 or -1.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t x, right, opp;

	if (array == NULL)
		return (-1);

	for (opp = 0, right = size - 1; right >= opp;)
	{
		printf("Searching in array: ");
		for (x = opp; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = opp + (right - opp) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			opp = x + 1;
	}

	return (-1);
}
