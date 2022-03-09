#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point_t {
        double x;
        double y;
}

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
        int dis_x
}