

void printArray(int * ptr, int s)
{
    for (int i= 0 ; i <s ; i++)
        {
            printf("%d\n",ptr[i]);
        }
}


void scanArray (int *ptr ,int s)
{
    for (int i= 0 ; i <s ; i++)
        {
            scanf("%d",(ptr+i));
        }
}
