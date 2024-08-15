#include <stdio.h>
#include <stdlib.h>


float * Circle_Param(float r)
{
   static float params[3] = {0,0,0};
    params[0] = 2*r ;//diameter;

    params[1] = 2*3.13*r; // circumference;
    params[2] = 3.14*r*r; // Area;
    return params;
}

int main()
{
    float number = 0;
    printf("Please, Enter a number\n");
    scanf("%f",&number);
    float * ptr = Circle_Param(number);
    printf("Diameter = %f\n",*ptr);
    printf("Circumf = %f\n",*(ptr+1));
    printf("Area = %f\n",ptr[2]);



    return 0;
}

