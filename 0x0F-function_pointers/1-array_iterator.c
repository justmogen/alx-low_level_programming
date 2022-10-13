#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -executes a function given as a parameter on
 *		each element of an array
 *@size: size of array
 *@action:pointer to function to be used
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int s;
	if (action == NULL || array == NULL)
		return;
	for (s = 0; s < size; s++)
	{
		action(*array);
		array++;
	}
}
