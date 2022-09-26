#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a:chessboard to print
 */
void print_chessboard(char (*a)[8])
{
	int ndx1, ndx2;

	for (ndx1 = 0; a[ndx1][7]; ndx1++)
	{
		for (ndx2 = 0; ndx2 < 8; ndx2++)
		{
			_putchar(a[ndx1][ndx2]);
		}
	_putchar('\n');
	}
}
