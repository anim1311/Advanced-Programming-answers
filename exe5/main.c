#include <stdio.h>
#define SIZE(x) sizeof(x)/sizeof(x[0])





void task1(void){

    int fib_numbers[40]={0,1};
    printf("THe Fibonacci numbers: ");
    for (int i = 2; i < SIZE(fib_numbers); i++)
    {
        /* code */
        fib_numbers[i] = fib_numbers[i-1]+fib_numbers[i-2];
        printf("%d\t",fib_numbers[i]);

    }
    printf("\n");

    
}


void task2(void){
    int digit_seen[10] = {0};
    int digit;
    long n;
    int any_reps = 0;
    printf("Enter a number: ");
    scanf("%ld", &n);
    while (n > 0 && !any_reps) {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }
    printf("\nDigit:\t\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
    printf("Occurrences:\t");
    for (int i = 0; i <SIZE(digit_seen) ; i++)
    {
        /* code */
        printf("%d\t",digit_seen[i]);
    }
    printf("\n");
    
}

void task3(void){

    int matrix[5][5];
    int row[5]={0},col[5]={0};

    for (int i = 0; i < SIZE(matrix); i++) {
		
        printf("Enter row %d: ", i + 1);

		scanf("%d %d %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &matrix[i][4]);
	}

    for (int i = 0; i < SIZE(matrix); i++)
    {
        /* code */
        
        for (int j = 0; j < SIZE(matrix); j++)
        {
            row[i]+=matrix[i][j];
            col[j]+=matrix[i][j];
        }
        

    }

    printf("\nRow totals:\t");
	for (int i = 0; i < SIZE(matrix); i++) {
		printf(" %d", row[i]);
	}

    printf("\nColumn totals:\t");
	for (int i = 0; i < SIZE(matrix); i++) {
		printf(" %d", col[i]);
	}
    printf("\n");
    
    
}

void task4(){

    char checker_board[8][8];
    for (int i = 0; i < SIZE(checker_board); i++)
    {
        /* code */
        for (int j = 0; j < SIZE(checker_board); j++)
        {
            /* code */
            if((i+j)%2==0)
                checker_board[i][j]='B';
            else
                checker_board[i][j]='R';
        }
        
    }
    for (int i = 0; i < SIZE(checker_board); i++)
    {
        /* code */
        for (int j = 0; j < SIZE(checker_board); j++)
        {
            /* code */
            printf("%c",checker_board[i][j]);
        }
        printf("\n");
    }
    
}

void task5(void){

    int B[5][5] = {
		{1,2,8,4,5},
		{8,8,3,4,5},
		{1,2,3,4,5},
		{1,2,9,8,5},
		{8,2,3,5,8}
	}; //O(1)

    int check[100]={0}; //O(1)
    /*
    printf("Enter Elements\n");
    for (int i = 0; i < SIZE(B); i++) {
		
        printf("Enter row %d: ", i + 1);

		scanf("%d %d %d %d %d", &B[i][0], &B[i][1], &B[i][2], &B[i][3], &B[i][4]);
	}
    */

    printf("Unique Numbers: ");//O(1)

    for (int i = 0; i < SIZE(B); i++)
    {
        /* code */

        for (int j = 0; j < SIZE(B); j++)
        {
            /* code */
            
            if(check[B[i][j]]==0)
                printf(" %d",B[i][j]);
            check[B[i][j]]++;
            
            
        }
        
    }//O(N^2)

    printf("\nNumbers Common in all Rows: \t");
    int n = 0;
    int count;
    while(n!=SIZE(check)){

        count = 0;
        if(check[n]>1){

            for (int i = 0; i < SIZE(B); i++){
                for (int j = 0; j < SIZE(B); j++)
                {
                    /* code */
                    if(B[i][j]==n){
                        //printf("\n%d-i %d-j %d-B",i,j,B[i][j]);
                        count++;
                        break;
                    }
                    
                }
            }
            if(count==SIZE(B))  
                printf("%d\t",n);
        }
        n++;

    }
    //O(N^2)
    printf("\nNumbers Common in all columns: \t");
    n=0;
    while(n!=SIZE(check)){

        count = 0;
        if(check[n]>1){

            for (int j = 0; j < SIZE(B); j++){
                for (int i = 0; i < SIZE(B); i++)
                {
                    /* code */
                    if(B[i][j]==n){
                        //printf("\n%d-i %d-j %d-B",i,j,B[i][j]);
                        count++;
                        break;
                    }
                    
                }
            }
            if(count==SIZE(B))  
                printf("%d\t",n);
        }
        n++;

    }//O(N^2)
    
}


    


int main(void){

    float loan = 20000, interest = 0.02,amount;
    int time=0;
    printf("\nWhat annual payment do you choose? ");
    scanf("%f",&amount);
    while (amount<400)
    {
        printf("\nThe annual payment has to be atleast 400. Please choose again: ");
        scanf("%f",&amount);
    }

    while(loan>0)
    {
        loan = loan*(1+interest)-amount;
        time++;
    }
    
    printf("\nIt will take %d years to pay back the loan.\n",time);
   
}