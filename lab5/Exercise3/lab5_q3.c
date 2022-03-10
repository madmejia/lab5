/**
 * @file lab5_q3.c
 * 
 * @author Madison Mejia
 *
 * @date 3/9/2022
 * 
 * Assignment: Lab 5
 * 
 * @brief a program that stores points
 *  
 * @details uses structure as x and y values to calculate the euclidian
 * and manhattan distance between the inputted points
 * 
 * @bug none
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

///stores x and y value
struct point_t {
        double x;
        double y;
} ; 

double euclidian(struct point_t point[]);
double manhattan(struct point_t point[]);

int main(void)
{
        struct point_t point[2];

        ///prompts user input
        printf("Enter first coordinate as x,y: ");
        scanf("%lf,%lf", &point[0].x, &point[0].y);

        printf("Enter second coordinate as x,y: ");
        scanf("%lf,%lf", &point[1].x, &point[1].y);

        ///prints calculated values
        printf("%f\n", euclidian(point));
        printf("%f\n", manhattan(point));

        return 0;

}

/**
 * @brief euclidian distance calcuation
 * @param point[] calculated structure 
 * @return distance between points 1 and 2
 */
double euclidian(struct point_t point[]) 
{
        int dis_x = pow((point[0].x - point[1].x), 2);
        int dis_y = pow((point[0].y - point[1].y), 2);

        return sqrt(dis_x + dis_y);
}

/**
 * @brief manhattan distance calcuation
 * @param point[] calculated structure 
 * @return distance between points 1 and 2
 */
double manhattan(struct point_t point[]) 
{
        int dis_x = abs(point[0].x - point[1].x);
        int dis_y = abs(point[0].y - point[1].y);

        return dis_x + dis_y;
}