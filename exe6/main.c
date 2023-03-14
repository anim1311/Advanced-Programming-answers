#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define SIZE(x) sizeof(x)/sizeof(x[0])


// Pre declared functions ------------------------------------------------------------------------
void bubbleSort(int arr[],int size);
void cocktailSort(int arr[],int size);
void printArray(int arr[],int size);
double power(double m, int n);
double inner_product(double a[], double b[], int n);
int day_of_year(int month, int day, int year); 
void task2();
void task3();
double polynomial(double x);
void task10();
//------------------------------------------------------------------------------------------------



//////////////////Main Driving function////////////////////////
int main(void){

    //task10();
    return 0;
}
//////////////////////////////////////////////////////////////

void printArray(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d\t",arr[i]);
    }
    
}

void bubbleSort(int arr[],int size){

    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    
    
}

void cocktailSort(int arr[],int size){

    //Task 4
    int temp;
    int start = 0, end = size;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = start; j<end;j++)
        {
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        end--;
        for (int j = end; j > start; j--)
        {
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        start++;
        
        
    }
    
    
}
double inner_product(double a[], double b[], int n){

    //Task 9
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i]+b[i];
    }
    return sum;

}
double power(double m, int n){

    for (int i = 1; i < n; i++)
    {
        m*=m;
    }
    return m;
}
int day_of_year(int month, int day, int year) {

    
    // task 8
    for (int i = 1; i < month; i++) {
        switch(i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                day += 31;
                break;
            case 4: case 6: case 9: case 11:
                day += 30;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                    day += 29;
                else
                    day += 28;
        }
    }
    return day;
}

void task2(){

    int a[] = {1, -12, 34, 0, 101, -4, 102, 80};
    int b[] = {44, 78, 22, 7, 98, 56, 34, 2, 38, 35, 45};
    int c[] = {8, 44, 3, 16, 11, 7, 45, 33};
    bubbleSort(a,SIZE(a));
    bubbleSort(b,SIZE(b));
    bubbleSort(c,SIZE(c));
    printf("Array A: ");
    printArray(a,SIZE(a));
    printf("\n");
    printf("Array B: ");
    printArray(b,SIZE(b));
    printf("\n");
    printf("Array C: ");
    printArray(c,SIZE(c));
    printf("\n");

}

void task3(){
    int matrix[5][5];
    int col[5]={0};

    for (int i = 0; i < SIZE(matrix); i++) {
		
        printf("Enter row %d: ", i + 1);

		scanf("%d %d %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &matrix[i][4]);
	}

    for (int j = 0; j < SIZE(matrix); j++)
    {
        for (int i = 0; i < SIZE(matrix); i++)
        {
            col[i] = matrix[i][j];
        }
        bubbleSort(col,SIZE(col));
        for (int i = 0; i < SIZE(matrix); i++)
        {
            matrix[i][j] = col[i];
        }
        
    }

    printf("Sorted Matrix: \n");
    for (int i = 0; i < SIZE(matrix); i++)
    {
        for (int j = 0; j < SIZE(matrix); j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
        
    }
    
    
}
double polynomial(double x){
    return 3*power(x,5)+2*power(x,4)-5*power(x,3)-power(x,2)+7*x-6;
}

void task10(){

    double x;
    printf("Enter a values of x: ");
    scanf("%lg",&x);
    x = polynomial(x);
    printf("The value evaluted is : %g",x);
}