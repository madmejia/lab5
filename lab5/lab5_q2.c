/**
 * @file lab5_q2.c
 * 
 * @author Madison Mejia
 *
 * @date 3/9/2022
 * 
 * Assignment: Lab 5
 * 
 * @brief a program that gives the colors of the rainbow a numeric value
 *  
 * @details 
 * 
 * @bug none
 */

#include <stdio.h>

///numbers enumerated with value
enum {
        RED = 18,
        ORANGE,
        YELLOW = 5,
        GREEN,
        BLUE,
        INDIGO = 14,
        VIOLET
} ; 

int main(void) 
{
        printf("RED: %d\n", RED);
        printf("ORANGE: %d\n", ORANGE);
        printf("YELLOW: %d\n", YELLOW);
        printf("GREEN: %d\n", GREEN);
        printf("BLUE: %d\n", BLUE);
        printf("INDIGO: %d\n", INDIGO);
        printf("VIOLET: %d\n", VIOLET);

        return 0;
}