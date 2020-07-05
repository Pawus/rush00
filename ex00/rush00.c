#include <stdio.h>
#include <stdlib.h>
#include "ft_putchar.c"

void print1(int a_y, int a_x, int x, int y){
	if (a_y == 0 || a_y == y-1)
	{
	ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void rush(int x, int y)
{
	int a_x;
	int a_y;
	a_x = 0;
	a_y = 0;
	while (a_y < y)
	{
		if (a_y == 0 || a_y == y-1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('|');
		}
		while(a_x < x)
		{
			if (a_x != 0)
			{
				if (a_x == x-1)
				{
					if(a_y == 0 || a_y == y-1)
					{
					ft_putchar('o');
					}
					else
					{
						ft_putchar('|');
					}
				}
				else 
				{
					print1(a_y, a_x, x, y);
				}
			}
			a_x++;
		}
		a_y++;
		a_x=0;
		ft_putchar('\n');
	}
}

