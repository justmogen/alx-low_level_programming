#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2D.M array of integers
 * @width:width of 2DM array
 * @height:height of the 2DM array
 * Return:NULL on failure or if width or height is 0
 *		or negative - NULL
 */
int **alloc_grid(int width, int height)
{
	int i_ht, i_wdth, **t2DM;

	if (i_wdth <= 0 || i_ht <= 0)
		return (NULL);

	t2DM = malloc(sizeof(int *) * height);
	if (t2DM == NULL)
	{
		return (NULL);
	}
	for (i_ht = 0; i_ht < height; i_ht++)
	{
		t2DM[i_ht] = malloc(sizeof(int) * width);
		if (t2DM[i_ht] == NULL)
		{
			for (; i_ht >= 0; i_ht--)
			{
				free(t2DM[i_ht]);
			}
			free(t2DM);
			return (NULL);
		}

		for (i_wdth = 0; i_wdth < width; i_width++)
			t2DM[i_ht][i_wdth] = 0;	
	}
	return (t2DM);
}
