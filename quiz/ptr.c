#include<stdio.h>


typedef struct node{

    int value;
    struct node *next;

}Node;


int main(){
    
    Node first;
    Node second;
    Node third;

    first.value = 1;
    second.value = 2;
    third.value = 3;

    first.next = &second;
    second.next = &third;
    third.next = NULL;

    printf("The address of the first element is %d\n",&first);
    printf("The value of the first element is: %d\n",first.value);
    printf("The address of the next element is: %d\n",first.next);

    printf("The address of the second element is %d\n",&second);
    printf("The value of the second element is: %d\n",second.value);
    printf("The address of the next element is: %d\n",second.next);

    printf("The address of the third element is %d\n",&third);
    printf("The value of the third element is: %d\n",third.value);
    printf("The address of the next element is: %d\n",third.next);   

}
