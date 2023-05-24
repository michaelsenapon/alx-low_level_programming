#include "main.h"

/**
 * jack_bauer - Print every minute of the day starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int H1 = 0;
	int H2;
	int S1;
	int S2;

	for(; H1 <= 2; H1++)
	{
		H2 = 0;
		for(; H2 <= 9; H2++)
		{
			S1 = 0;
			for(; S1 <= 5; S1++)
			{
				S2 = 0;
				for(; S2 <= 9; S2++)
				{
					if ((H1 == 2 && H2 == 3) && (S1 == 5 && S2 == 9))
					{
						_putchar(H1 + '0');
						_putchar(H2 + '0');
						_putchar(':');
						_putchar(S1 + '0');
						_putchar(S2 + '0');
						_putchar('\n');
						return;
					}
					else
					{
						_putchar(H1 + '0');
						_putchar(H2 + '0');
						_putchar(':');
						_putchar(S1 + '0');
						_putchar(S2 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
