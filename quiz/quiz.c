#include<stdio.h>


double factorial(int num){ 
    if(num<2)
        return 1;

    return num*factorial(num-1);
}


void groupRed(void){

    int n = -1;
    double e = 0;
    printf("Enter the number of interations of e: ");
    scanf("%d",&n);

    for (int i = 1; i < n+1; i++){
           
        e+=1/factorial(i-1);
    }

    printf("The approximated value of e is %lf\n",e);
    
}


void groupGreen(void){

    int n = -1;

    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j>=n-1)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
        
    }
    

}



int main(){

    groupGreen();
    return 0;
}