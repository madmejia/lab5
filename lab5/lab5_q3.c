#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point_t {
        double x;
        double y;
} ; 

double euclidian(struct point_t point[]);
double manhattan(struct point_t point[]);

int main(void)
{
        struct point_t point[2];

        printf("Enter first coordinate as x,y: ");
        scanf("%lf,%lf", &point[0].x, &point[0].y);

        printf("Enter second coordinate as x,y: ");
        scanf("%lf,%lf", &point[1].x, &point[1].y);

        printf("%f\n", euclidian(point));
        printf("%f\n", manhattan(point));

        return 0;

}

double euclidian(struct point_t point[]) 
{
        int dis_x = pow((point[0].x - point[1].x), 2);
        int dis_y = pow((point[0].y - point[1].y), 2);

        return sqrt(dis_x + dis_y);
}

double manhattan(struct point_t point[]) 
{
        int dis_x = abs(point[0].x - point[1].x);
        int dis_y = abs(point[0].y - point[1].y);

        return dis_x + dis_y;
}