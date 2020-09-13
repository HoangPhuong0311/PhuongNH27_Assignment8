#include <stdio.h>
#include <stdlib.h>
#include "Draw_triangle.h"

/*
 * brief This func use for draw an triangle on console 
 * param n : number of line equals height of triangle
 * ret   none
 */
void Draw_triangle(uint8_t n) {

    /*for loop to printf two side from top to bottom*/
    for(uint8_t x = 0; x < n-1; x ++)
    {
        /*(2*n - 1) is length of bottom */
        for(uint8_t y = 1; y <= (2*n-1); y ++)
        {
            if(y == n - x | y == n + x )
            {
                printf("%c", '*');
            }
            else printf("%c", ' ');
        }
        printf("\n");
    }
    /*for loop to printf base */
    for(uint8_t y=1; y <= (2*n-1); y ++) {
        printf("%c", '*');
    }
}


