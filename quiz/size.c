#include<stdio.h>
#include<math.h>

int main(){

    printf("size of int : %d\n", sizeof(int));
    printf("size of unsingedint : %d\n",sizeof(unsigned int));
    printf("size of unsingedint : %d\n",(int)pow(2,31)-1);
    printf("size of long : %d\n",sizeof(long));
    printf("size of unlong : %d\n",sizeof(unsigned long));
    printf("size of double : %d\n",sizeof(double));
    printf("size of float : %d\n",sizeof(float));
    printf("size of size_t : %d\n",sizeof(size_t));
}