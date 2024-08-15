#include <stdio.h>
#include <stdlib.h>



int main()
{

int A = 0, B =0 ,C =0 ;
printf("Please Enter 3 nubmers\n");
scanf("%d%d%d",&A,&B,&C);
printf("Maximum is ");
if(A>B)
{
if(A>C)printf("%d",A);
else printf("%d",C);
}
else
{
if(B>C) printf("%d",B);
else printf("%d",C);
}

    return 0;
}

