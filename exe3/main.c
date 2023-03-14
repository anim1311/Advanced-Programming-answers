#include<stdio.h>

void task1(){
    int n = 0;
    if(n>= 1 <=10)
        printf("1.n is between 1 and 10.\n");
    
    n = 5;
    if (n==1-10)
        printf("2.n is between 1 and 10.\n");
     
    int i = 17;
    printf("%d\n", i>=0? -i:i);
    
}

void task2(int age){

    int teenager = 0;
    if(age >=13 && age<=19)
        teenager = 1;
    //else
    //    teenager = 0;
    printf("Teenager = %d", teenager);
}

void task3(int area_code){

    switch (area_code)
    {
    case 229:
        printf("Albany\n");
        break;
    case 404:
        printf("Atlanta\n");
        break;
    case 470:
        printf("Atlanta\n");
        break;
    case 478:
        printf("Macon\n");
        break;
    case 678:
        printf("Atlanta\n");
        break;
    case 706:
        printf("Columbus\n");
        break;
    case 762:
        printf("Columbus\n");
        break;
    case 770:
        printf("Atlanta\n");
        break;
    case 912:
        printf("Savannah\n");
        break;
    
    default:
        printf("Area code not recognized.\n");
        break;
    }	 

}

void task4(){

    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11,
	sum1, sum2, total;
	printf("Please enter the first (single) digit: ");
	scanf("%1d", &i1);
	printf("\nPlease enter the first group of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &i2, &i3, &i4, &i5, &i6);
	printf("\nPlease enter the second group of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &i7, &i8, &i9, &i10, &i11);
	sum1=i1+i3+i5+i7+i9+i11;
	sum2=i2+i4+i6+i8+i10;
	total=3*sum1+sum2;
	total=total-1;
	total=total%10;
	total=9-total;
    int lastDigit = -1;
    printf("Please enter the last digit of the UPC: ");
    scanf("%1d",&lastDigit);
	if(lastDigit == total)
        printf("VALID!\n");
    else
    printf("INVALID\n");
}


void task5(void){

    int date1[3], date2[3];
    printf("Enter first date: ");
    scanf("%d/%d/%d",&date1[0],&date1[1],&date1[2]);

    printf("Enter second date: ");
    scanf("%d/%d/%d",&date2[0],&date2[1],&date2[2]);

    int flag = date1[2]-date2[2];// comparing the years


    if(flag == 0 ){ // if the years are the same
        flag = date1[0]-date2[0]; // comparing the months
        if(flag == 0){
            flag = date1[1]-date2[1]; // comparing the days
            if(flag == 0)
                printf("They are the same dates!!!!\n"); 
        }
    }
    if (flag <0) // if the first date is bigger than the second
    {
        printf("%0.2d/%0.2d/%0.2d is earlier than %0.2d/%0.2d/%0.2d\n",date1[0],date1[1],date1[2], date2[0],date2[1],date2[2]);
    }
    else if (flag>0){
        printf("%0.2d/%0.2d/%0.2d is earlier than %0.2d/%0.2d/%0.2d\n",date2[0],date2[1],date2[2], date1[0],date1[1],date1[2]);
    }
    

}


int task6(void){

    int number = 0, digit1 = 0, digit2 = 0;

    printf("Enter a two digit number: ");
    scanf("%d",&number);

    if(number<10 || number>99){
        printf("The number you entered is not a two digit number!\n");
        return 0;
    }
    digit1 = number/10;
    digit2 = number%10;
    
    printf("You entered the number ");

    if (digit1 == 1) {
        switch (digit2) {
            case 0: printf("ten");
                    break;
            case 1: printf("eleven");
                    break;
            case 2: printf("twelve");
                    break;
            case 3: printf("thirteen");
                    break;
            case 4: printf("fourteen");
                    break;
            case 5: printf("fifteen");
                    break;
            case 6: printf("sixteen");
                    break;
            case 7: printf("seventeen");
                    break;
            case 8: printf("eighteen");
                    break;
            case 9: printf("nineteen");
                    break;
        }
        printf(".\n");
        return 0;
    }

    switch (digit1) {
        case 2: printf("twenty");
                 break;
        case 3: printf("thirty");
                 break;
        case 4: printf("forty");
                 break;
        case 5: printf("fifty");
                 break;
        case 6: printf("sixty");
                 break;
        case 7: printf("seventy");
                 break;
        case 8: printf("eighty");
                 break;
        case 9: printf("ninety");
                 break;
    }

    switch (digit2) {
        case 1: printf("-one");
                break;
        case 2: printf("-two");
                break;
        case 3: printf("-three");
                break;
        case 4: printf("-four");
                break;
        case 5: printf("-five");
                break;
        case 6: printf("-six");
                break;
        case 7: printf("-seven");
                break;
        case 8: printf("-eight");
                break;
        case 9: printf("-nine");
                break;
    }

    printf(".\n");
}


void task7(void){

    float money = 0.0f;
    int cents50 = 0,cents20 = 0,cents10 = 0,cents5 = 0,cents2 = 0,cents1 = 0,iMoney = 0;
    
    printf("Enter the amount: ");
    scanf("%f", &money);

    iMoney = money*100;
    
    if(iMoney>=50){
        cents50 = iMoney/50;
        iMoney = iMoney%50;
    }
    if(iMoney>=20){
        cents20 = iMoney/20;
        iMoney = iMoney%20;
    }
    if(iMoney>=10){
        cents10 = iMoney/10;
        iMoney = iMoney%10;

    }
    if(iMoney>=5){
        cents5 = iMoney/5;
        iMoney = iMoney%5;
    }
    if(iMoney>= 2){
        cents2 = iMoney/2;
        iMoney = iMoney%2;
    }
    if(iMoney>=1){
        cents1 = iMoney;
        iMoney = 0;
    }

    printf("The number of 50 cent coins need: %d\n", cents50);
    printf("The number of 20 cent coins need: %d\n", cents20);
    printf("The number of 10 cent coins need: %d\n", cents10);
    printf("The number of 5 cent coins need: %d\n", cents5);
    printf("The number of 2 cent coins need: %d\n", cents2);
    printf("The number of 1 cent coins need: %d\n", cents1);
}


int main(void){

    int number = 0, digit1 = 0, digit2 = 0;

    printf("Enter a two digit number: ");
    scanf("%d",&number);

    if(number<10 || number>99){
        printf("The number you entered is not a two digit number!\n");
        return 0;
    }
    digit1 = number/10;
    digit2 = number%10;
    
    printf("You entered the number ");

    if (digit1 == 1) {
        switch (digit2) {
            case 0: printf("ten");
                    break;
            case 1: printf("eleven");
                    break;
            case 2: printf("twelve");
                    break;
            case 3: printf("thirteen");
                    break;
            case 4: printf("fourteen");
                    break;
            case 5: printf("fifteen");
                    break;
            case 6: printf("sixteen");
                    break;
            case 7: printf("seventeen");
                    break;
            case 8: printf("eighteen");
                    break;
            case 9: printf("nineteen");
                    break;
        }
        printf(".\n");
        return 0;
    }

    switch (digit1) {
        case 2: printf("twenty");
                 break;
        case 3: printf("thirty");
                 break;
        case 4: printf("forty");
                 break;
        case 5: printf("fifty");
                 break;
        case 6: printf("sixty");
                 break;
        case 7: printf("seventy");
                 break;
        case 8: printf("eighty");
                 break;
        case 9: printf("ninety");
                 break;
    }

    switch (digit2) {
        case 1: printf("-one");
                break;
        case 2: printf("-two");
                break;
        case 3: printf("-three");
                break;
        case 4: printf("-four");
                break;
        case 5: printf("-five");
                break;
        case 6: printf("-six");
                break;
        case 7: printf("-seven");
                break;
        case 8: printf("-eight");
                break;
        case 9: printf("-nine");
                break;
    }

    printf(".\n");

    return 0;
    
}