#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 */
void times_table(void)
{
	int i = 0;
	int res;
	int tens;
	int unit;

	for (; i <= 9; i++)
	{
		int j = 0;
		for (; j <= 9; j++)
		{
			res = (i * j);
			if (res > 9)
			{
				tens = (res / 10);
				unit = (res % 10);
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(unit + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
					_putchar(res + '0');

			}
		}
		_putchar('\n');
	}
}
