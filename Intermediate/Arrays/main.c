#include <stdio.h>
#include <stdlib.h>
#include "Arrays.h"

#define MAX_SIZE 20
#define size(arr) (sizeof(arr))/(sizeof(int))

int main()
{
    int arr[MAX_SIZE] = {};
    scanArray(arr,10);
    //print Negative Array Elements
    printf("Negative Elements are : ");



    return 0;
}
