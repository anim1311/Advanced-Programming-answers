#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<malloc.h>


void upperCase1(char string[]){

    int i = 0;
    while (string[i]!='\0')
    {
        
        if(string[i]>='a' && string[i]<='z')
            string[i]-=32;
        ++i;
    }
    
}
void upperCase2(char* string){
    while (*string!='\0')
    {
        if(*string >= 'a' && *string <='z')
            *string-=32;
        string++;    
    }
}
char *duplicate(const char *p)
{
    char *q = (char*)malloc((strlen(p)+1)*sizeof(char));
    strcpy(q, p);
    return q;
}
void censor(char *string) {
    char *temp = string;
    while (*(temp+2) != '\0') {
        if (*temp == 'f' && *(temp+1) == 'o' && *(temp+2) == 'o')
            *temp = *(temp+1) = *(temp+2) = 'x';
        temp++;
    }
}

void copy_arr(double *a, double *b, int n)
{
    int i; 
    for (i = 0;i<n;i++)
    {
        *(b+i) = *(a+i);    
    }
}

int main()
{
    char string [] ="anirudh";
    printf("Before: %s\n",string);
    upperCase2(string);
    printf("After: %s\n",string);
}