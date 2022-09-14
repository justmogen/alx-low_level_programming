#include "main.h"
/**
 * times_table - prints multiplication of 9 from 0
 * Description:timestable for 9
 * Return: void
 */
void times_table(void)
{
	int y, z, answ;

	for (z = 0; z <= 9; z++)
	{
		for (y = 0; y <= 9; y++)
		{
			answ = z * y;
			if (y == 0)
			{
				_putchar('0' + answ);
			}
			else if (answ >= 10)
			{
				_putchar(' ');
				_putchar('0' + (answ / 10));
				_putchar('0' + (answ % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + answ);
			}
			if (y != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
