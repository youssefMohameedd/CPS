#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number1 = 0,number2= 0;
   printf("Please, Enter a number\n");
   scanf("%d%d",&number1,&number2);

   while(number1>=number2)
    {
        printf("%d\n",number1);
        number1--;

    }





    return 0;
}
