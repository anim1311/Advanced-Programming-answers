#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>



float volumeOfShpere(float radius) {

	return M_PI*(4.0f/3.0f)*radius*radius*radius;
}
float volumeOfShpere2(float radius) {

	return M_PI * (4 / 3) * radius * radius * radius;
}

float remaining(float loan,float rate, float installment){
    loan = (loan-installment);
    loan+=loan*(rate / 100.0f)/12.0f;
    return loan;
}

void loan(void){

    
    float loan = 20000.0f, rate = 6.0f, installment = 386.66f;

    //float monthlyRate = (rate / 100.0f)/12.0f;

    //loan = (loan - installment) + (loan * monthlyRate);
    
    //loan = loan*(1+monthlyRate)-installment;    
    
    loan = remaining(loan,rate,installment);  
    printf("\n\n\tBalance remaining after first payment: $%0.2f\n", loan);
    
    
    loan = remaining(loan,rate,installment); 
    printf("\tBalance remaining after second payment: $%0.2f\n", loan);
    
    
    loan = remaining(loan,rate,installment); 
    printf("\tBalance remaining after third payment: $%0.2f\n\n", loan);

    
	printf("%5.1d\n",40);
}




int main(void) {

	//printf("%f\n", volumeOfShpere(10.0f));
	//printf("%f", volumeOfShpere2(10.0f));

   
    
    //loan();

    // int i = 3,j = 4,k = 5;

    //printf("%d ", i++ - 1); // %d = i-1 = 0 ; i = i+1= 1+1 = 2;
    //printf("%d ", i) = 2;

    // printf("%d ", i++ - ++j); // j = j+1 = 5+1 = 6 , %d = i - j = 10-6 = 4 , i = i+1 = 11
    // printf("%d %d ", i, j ); // 11 6

    // printf("%d ", i++ - --j );
    // printf("%d %d ", i, j );

    // printf("%d ", i++ -j++ + --k );
    // printf("%d %d %d ", i, j, k);

    loan();
    printf("Bhenchod\n Betichod\n modichod\n");
    


    return 0;
#include"bracket.h"
