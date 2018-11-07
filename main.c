#include <stdio.h>
#include <stdlib.h>

int main()
{
    double l;
    double w;

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~ Welcome to the Area of a 2D Rectangle Calculator! ~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("1) Area is measured in square units.\n");
    printf("2) To find the area of a rectangle you must multiple its length by its width.\n");
    printf("3) The formula to find the area of a rectangle is: area = length x width\n\n");

     printf("*Note: This calculator accepts decimal values.\n\n");

    printf("Type in the length: ");
    scanf("%lf", &l);

    printf("Type in the width: ");
    scanf("%lf", &w);

    printf("\nThe area of this rectangle is %f square units.\n", l * w);

    return 0;
}
