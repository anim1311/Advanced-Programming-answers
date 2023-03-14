#include<stdio.h>
#include <stdlib.h>


void task1(){
    int i;
    for (i = 0; i < 10; i++) // will go from 0 to 9
        printf("%d\n",i);
    printf("Break\n");
    for (i = 0; i < 10; ++i) // will go from 0 to 9
        printf("%d\n",i);
    printf("Break\n");
    for (i = 0; i++ < 10;) // will go from 1 to 10
        printf("%d\n",i);
    printf("Break\n");
    for (i = 0; ++i < 10;) // will go from 1 to 9
        printf("%d\n",i);
    printf("Break\n");
}   

void task2(){
    int i = 9384;
    printf("The do while loop\n");
    do {
        printf("%d\n", i);
        i /= 10;
    } while (i > 0);

    printf("The for loop\n");
    for(i = 9384;i>0;i/=10)
        printf("%d\n", i);
}


void task3(){

    int i ;
    /*printf("The for loop (this is an infinite loop but yea...\n");
    for(i = 10; i >= 1; i /= 2)
        printf("%d \n", i++);
    printf("This is a while loop also infinite");
    */
    i = 10;
    while (i>=1)
    {
        printf("%d \n", i++);
        i/=2;
    }

}


void task4(){

    int n;
    if (n % 2 == 0);// the ; is the mistake
        printf("n is even.\n");

    if (n % 2 == 0)
        printf("n is even.\n");
}


void task5(){

    float input=1;
    float max = 0;

    while(input>0){

        printf("Enter a number: ");
        scanf("%f",&input);

        if(input>max)
            max = input;
        
    }
    printf("The largest number entered was %f\n",max);
}

void task6(){

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            printf("%dx%d = %d\n",j,i,i*j);
        }
        
    }
    
}

int task7(int m, int n){

    int rem;
    while (n!=0)
    {
        rem = m%n;
        m = n;
        n = rem;
    }
    //printf("Greatest common divior: %d\n",m);
    return m;
    

}

void task8(){

    int num = -1, dem = -1,gcd = -1;

    printf("Enter a fraction: ");
    scanf("%d/%d",&num,&dem);
    gcd = task7(num,dem);
    while (num/gcd!=0 && dem/gcd!=0)
    {
        num/=gcd;
        dem/=gcd;
    }
    printf("In lowest terms: %d/%d\n",num,dem);

}
int* test(int num){
   
 int r[] = {1,2,3};
    return r;
}
const char* charAppend(const char* str, char new){
    
    int count = 0;
    while (*str!='\0')
    {
        count++;
    }
    str =  (char *) realloc(str,8*count+1 );
    strcat(str, ".com");
    return str;
}

int main(void){


    //task1();
    //task2();
    //task3();
    //task5();
    //task6();
    //printf("Greatest common divior: %d\n",task7(28,12));
    //task8();
    
    char* st = "anirudh";
    strcatD:(st,"h");

    for(;*st!='\0';st++){
        printf("%c",*st);
    }
    printf("\n%d",sizeof(st));

    


} 