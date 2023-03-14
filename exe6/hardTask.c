#include<stdio.h>
#include<stdlib.h>
#include<time.h>


/*
Task 11 The random walk
*/

typedef struct vec2{ 
    // colection of data to represent position in 2d space
    int x,y;
}Vec2;

// Pre declared functions ------------------------------------------------------------------------

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
//------------------------------------------------------------------------------------------------


//////////////////Main Driving function////////////////////////
int main(){

    char walk[10][10];
    generate_random_walk(walk);
    print_array(walk);
    
    return 0;
}
///////////////////////////////////////////////////////////////


void print_array(char walk[10][10]){

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ",walk[i][j]);
        }
        printf("\n");
        
    }
    

}

void generate_random_walk(char walk[10][10]){

    srand(time(0));
    
    int alphabet = 65;
    Vec2 pos ={0,0},curr={0,0};
    int running = 1;
    int move;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            walk[i][j] = '.';
        }
    }

    walk[pos.x][pos.y]=(char)alphabet;
    alphabet++;

    while (running &&alphabet!=91){

        
        move = rand()%4; // this can give us 0,1,2,3

        switch (move)
        {
        case 0: // to go right
            curr.y++;
            break;
        case 1: // to go down
            curr.x++;
            break;
        case 2: // to go left
            curr.y--;
            break;
        case 3: // to go up
            curr.x--;
            break;
        default:
            printf("Oops something went wrong!!\n");
            exit(1);
            break;
        }

        if(curr.x<0 || curr.y<0 || curr.x >=10 || curr.y >=10 || walk[curr.x][curr.y]!='.'){
            
            curr.x = pos.x;
            curr.y = pos.y;

            if(walk[pos.x+1][pos.y]!='.' && walk[pos.x-1][pos.y]!='.' && walk[pos.x][pos.y+1]!='.'&& walk[pos.x][pos.y-1]!='.')
                break;
            continue;
        }
        else{
            pos.x = curr.x; 
            pos.y = curr.y;

            walk[pos.x][pos.y]=(char)alphabet;
            alphabet++;
            
        }
    }
    
}
