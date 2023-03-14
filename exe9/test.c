#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int size)
{
    int* i;
    for (i = arr; i < arr+size; ++i)
    {
        printf("%d ", *i);
    }
    printf("\n");

}
void print_stars(int n)
{
    for (int i = 0;i<n;i++)
    {
        for (int j = 0; j<n ; j++)
        {
            printf("%c",'*');
        }
        printf("\n");
        
        
    }
    
}


int main()
{
    print_stars(5);
    return 0;
}