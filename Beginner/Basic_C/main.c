#include <stdio.h>
#include <stdlib.h>
#include "Test.h"


int main()
{
    int day ,days ,years,months,weeks;
     printf("Enter number of days\n");
     scanf("%d",&days);
     day = days;
     years = days/365;
     days = days - (years*365.25);
 /*  months= days/30;
     days = days -(months*30);
   */weeks = days/7;
     days = days -(weeks*7);
     printf("%d days = %d years,%d weeks and %d days \n",day, years ,
            weeks,days);


    return 0;
}
