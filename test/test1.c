
#include <stdio.h>
#include <stdlib.h>





int * findLargest(int* arr, int arrSize)
{
    int i;
    // initialise both variables
    int maximum = arr[0], *max_pos = arr;

    for (i = 1; i < arrSize; i++)
    {
        if (arr[i]>maximum)
    {
        maximum = arr[i];
        // assign address here
        max_pos = &arr[i];
        }
    }
    // return address
    return max_pos;
}

int main()
{
    int b[]={1,2,76,4,2,98,4};
    int * max_pos;
    // use return value here
    max_pos = findLargest(b, 7);
    printf("The max value in the array is: %d", *max_pos);

    return 0;
}