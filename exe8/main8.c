#include<stdio.h>



void task1(void){

    int i = 5;
    int *p = &i;
    printf("\na.%d",*p);
    printf("\nb.%X",&p);
    printf("\nc.%X",*&p);
    printf("\nc1.%X",p);
    //printf("\nd.%d",*i);
    printf("\ne.%X",&i);
    printf("\nf.%d",*&i);
    //printf("\ng.%d",*i);


}
void avg_sum( double a[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0;
    for (i = 0; i < n; i++)
    {
    *sum += a[i];
    }
    *avg = *sum / n;
}

int main(void){

    //task1();
    double avg, sum;
    double arr[] = {1,2,3,4};
    avg_sum(arr,4,&avg,&sum);
    printf("%lf\n",avg);
    return 0;
}
