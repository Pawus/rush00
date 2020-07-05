#include <stdio.h>
#include <stdlib.h>

#include "rush00.c"

int main()
{
    printf("\n\nrush(1,1)\n");
	rush(1,1);


    printf("\n\nrush(1,5)\n");	
	rush(1,5);
	
    printf("\n\nrush(5,1)\n");
	rush(5,1);
	
    printf("\n\nrush(5,5)\n");
	rush(5,5);	
    printf("\n\nrush(25,25)\n");
	rush(25,25);
    return 0;
}