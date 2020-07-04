#include <stdio.h>
#include <stdlib.h>
#include "ft_putchar.c"

void rush(int l, int h){
	int i_l = 0;
	int i_h = 0;
	

	while (i_h < h){
		
		if (i_h == 0 || i_h == h-1){
			ft_putchar('o');
		}
		else {
			ft_putchar('|');
		}
		while (i_l < l){
			if (i_l > 0) {

				if (i_l == l-1){
					ft_putchar('o');
				}
				else {
					ft_putchar('-');
				}
			}
			i_l++;

		}
		i_h++;
		ft_putchar('\n');
	}
}