#include "function_pointers.h"
/**
 * array_iterator - execute function
 * @array: input
 * @size: size
 * @action: pointer
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
