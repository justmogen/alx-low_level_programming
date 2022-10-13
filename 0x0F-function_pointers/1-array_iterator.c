#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on
 *		each element of an array
 *@size: size of array
 *@action:pointer to function to be used
 *@array: used array
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
