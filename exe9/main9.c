#include<stdio.h>
#define BIT_DEPTH 8


int countSet(int num){

    if(!num)
        return 0;
    int c = countSet(num>>1);
    return num & 1 == 1 ? c+1:c;
}

void task3(void){
	int inp = 0b01010110;
	int setBits = countSet(inp);
	int out = 0;
	for (int i = 0; i < BIT_DEPTH; i++)
	{
		if(!setBits)
			out<<=1;
		else{
			setBits--;
			out = out<<1 | 1;
		}
	}

	printf("%d\n",out);
}

unsigned char set_bit(unsigned char c, unsigned char b){
	return c | 1<<b;
}
unsigned char clear_bit(unsigned char c, unsigned char b){
	return c & ~(1<<b);
}
unsigned char test_bit(unsigned char c, unsigned char b){
	return (c>>b)&1;
}

int positionSigBit(int num){

	if(!num)
		return -1;
	return 1+positionSigBit(num>>1);
	
}
int powerofTwo(int num){
	int check = 1;
	while(check<=num){
		
		if(num == check)
			return 1;
		check<<=1;
	}
	return 0;

}
int main(){
	int num = 1024;
    printf("%d - %d",num,powerofTwo(num));
	unsigned char i = 137, j = 106;
	printf("\n%d",i<<j);
    return 0;
}