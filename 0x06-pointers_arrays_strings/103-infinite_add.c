#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1:first number
 * @n2:second number
 * @r:buffer to store result
 * @size_r:buffer size
 * Return: pointer to r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int inx, inx2, kx, l, mx, nx;

	for (inx = 0; n1[inx]; inx++)
		;
	for (inx2 = 0; n2[inx2]; inx2++)
		;
	if (inx > size_r || inx2 > size_r)
		return (0);
	mx = 0;
	for (inx -= 1, inx2 -= 1, kx = 0; kx < size_r - 1; inx--, inx2--, kx++)
	{
		nx = mx;
		if (inx >= 0)
			nx += n1[inx] - '0';
		if (inx2 >= 0)
			nx += n2[inx2] - '0';
		if (inx < 0 && inx2 < 0 && nx == 0)
		{
			break;
		}
		mx = nx / 10;
		r[kx] = nx % 10 + '0';
	}
	r[kx] = '\0';
	if (inx >= 0 || inx2 >= 0 || mx)
		return (0);
	for (kx -= 1, l = 0; l < kx; kx--, l++)
	{
		mx = r[kx];
		r[kx] = r[l];
		r[l] = mx;
	}
	return (r);
}
