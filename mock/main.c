#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void question1(){

    float PI = 3.1415f;
    printf("%0.2f\n",PI);
    printf("%0.0f\n",PI);
    printf("%0.6f\n",PI);

}
void question2(){
    int answer = 2+2;
    printf("The answer is %d.\n");// forgot to put the variable to print

    float result;
    result = 7.0/22.0;
    printf("The result is %d\n.", result); // wrong placeholder

    
}

void question3(){

    int m = 8,n = 8; // set to get mXn checkerboard

    for (int i = 0; i <4*n+1; i++)
    {
        for (int j = 0; j <6*m+1; j++)
        {
            if(i%4==0){
                if(j%6==0)
                    printf("+");
                else
                    printf("-");
            }
            else{
                if(j%6==0)
                    printf("|");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
int count(int num, int* arr, int len){

    //question 4
    if(!len)
        return 0;
    int c = count(num, arr+1,--len);

    return arr[0]==num ? c+1:c; 

}


void printBinary(unsigned char num){
    while (num>0)
    {
        printf("%d",num%2);
        num/=2;
    }
    printf("\n");
}
void question7(){

    unsigned char i = 77, j = 39;
    unsigned char notI = ~i; // to avoid implicit integer conversion

    //a 
    printf("i dec: %d hex: %X bin: ",i,i);
    printBinary(i);
    //b
    printf("j dec: %d hex: %X bin: ",j,j);
    printBinary(j);
    //a 
    printf("~i dec: %d hex: %X bin: ",notI,notI);
    printBinary(notI);
    //a 
    printf("i&j dec: %d hex: %X bin: ",i&j,i&j);
    printBinary(i&j);

}

int main(void){
    
    char* s1,*s2;
    strcpy(s1, "computer");
    strcpy(s2, "science");
    if (strcmp(s1, s2) < 0)
    strcat(s1, s2);
    else
    strcat(s2, s1);
    s1[strlen(s1)-6] = '\0';
    printf("%s\n",s1);
}