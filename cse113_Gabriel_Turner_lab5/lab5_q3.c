 /**
 * @file lab5_q3.c
 * 
 * @author Gabe Turner
 *
 * @date 10/10/2021
 *
 * Assignment: Lab 5
 *
 * @brief a program that uses structures to store points
 *
 * @details this program stores a point in a structure as an x value and a y value. It then calculates
 * the euclidian and manhattan distance between the points that are inputted.
 *
 * @bugs none
 *
 * @todo none
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*this structure stores an x,y value in it*/
struct point_t{
    double x;
    double y;
};

/*function prototypes*/
double euclidian(struct point_t point[]);
double manhattan(struct point_t point[]);

int main(void){
    struct point_t point[2];
    /*asks for user to input the two points*/
    printf("enter coordinate 1 as x,y: ");
    scanf("%lf,%lf", &point[0].x, &point[0].y);

    printf("enter coordinate 2 as x,y: ");
    scanf("%lf,%lf", &point[1].x, &point[1].y);
    
    /*prints the calulated values*/
    printf("%f\n", euclidian(point));
    printf("%f\n", manhattan(point));

    return 0;
}

/** calculates the euclidian distance
 * @param point[] the structure that is being calculated
 * @return uses point 1 and 2 and finds the distance between them through euclidian calculations
 */
double euclidian(struct point_t point[]){
    int dis_x = pow((point[0].x - point[1].x), 2);
    int dis_y = pow((point[0].y - point[1].y), 2);
    return sqrt(dis_x + dis_y);
}

/** calculates the manhattan distance
 * @param point[] the structure that is being calculated
 * @return uses point 1 and 2 and finds the distance between them through manhattan calculations
 */
double manhattan(struct point_t point[]){
    int dis_x = abs(point[0].x - point[1].x);
    int dis_y = abs(point[0].y - point[1].y);
    return dis_x + dis_y;
}