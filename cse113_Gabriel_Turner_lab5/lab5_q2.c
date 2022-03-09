 /**
 * @file lab5_q2.c
 * 
 * @author Gabe Turner
 *
 * @date 10/10/2021
 *
 * Assignment: Lab 5
 *
 * @brief a program that uses enumeration
 *
 * @details enumerates the colors of the rainbow and the prints the color and the value of the color
 *
 * @bugs none
 *
 * @todo none
 */

#include <stdio.h>

/*gives each color a numeric value*/
enum{
    RED = 18, ORANGE, YELLOW = 5, GREEN, BLUE, INDIGO = 14, VIOLET
};

int main(void){
    printf("RED: %d\n", RED);
    printf("ORANGE: %d\n", ORANGE);
    printf("YELLOW: %d\n", YELLOW);
    printf("GREEN: %d\n", GREEN);
    printf("BLUE: %d\n", BLUE);
    printf("INDIGO: %d\n", INDIGO);
    printf("VIOLET: %d\n", VIOLET);
    return 0;
}