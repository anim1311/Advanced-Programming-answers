#include<stdio.h>
#define SIZE(x) sizeof(x)/sizeof(x[0])



void mergeSort(int arr[], int start, int end);
void merge(int arr[],int start, int mid, int end);


int main(void){

    int arr[] = {73, 84, 47, 27, 36, 77, 49, 44, 87, 89, 47, 35, 85, 41,-10};

    printf("Array before sorted: ");
    for (int i = 0; i < SIZE(arr); i++)
        printf("%d ",arr[i]);
    printf("\n");

    //Merge sort
    mergeSort(arr,0,SIZE(arr)-1);

    printf("Array after sorted: ");
    for (int i = 0; i < SIZE(arr); i++)
        printf("%d ",arr[i]);
    printf("\n");
    
    return 0;
}



void mergeSort(int arr[], int start, int end){
    
    int mid;

    if(start!=end){
        
        //geting the mid point of the array
        mid = (start + end)/2;
        
        //sorting the left part of the array
        mergeSort(arr,start,mid);

        //sorting the right part of the array
        mergeSort(arr,mid+1,end);

        //Merging them back together
        merge(arr,start,mid,end);

    }
}


void merge(int arr[], int start, int mid, int end){

    
    int i,j,k;
    
    // Temp arrays
    int left[mid - start+ 1], right[end - mid];

    //copying data into temp arrays
    for(i = 0; i <SIZE(left); i++)
        left[i] = arr[start+i];
    for(i = 0; i <SIZE(right); i++)
        right[i] = arr[mid+i+1];
    
    i = 0;// Initial index of left array
    j = 0;// Initial index of right array
    k = start;// Initial index of the merrged array
    
    //comparing values (instertion sort)

    while (i<SIZE(left) && j<SIZE(right))
    {
        if(left[i] < right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;

        /*
        NOTE: there will be a few elements that will be left 
        if one the arrays are parsed throught that the other
        */

    }

    
    //Getting all the elements of the left array if any are left
    while (i<SIZE(left)){
        arr[k] = left[i];
        k++;
        i++;
    }

    //Getting all the elements of the right array if any are left
    while (j<SIZE(right)){
        arr[k] = right[j];
        k++;
        j++;
    }


}