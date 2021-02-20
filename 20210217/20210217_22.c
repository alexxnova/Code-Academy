/*
Дадена е шахматна дъска 8 х 8 с една фигура кон, в някой от
четирите ъгъла. Напишете програма, която движи коня по
стандартния начин: 2 полета в една посока и едно
перпендикулярно на избраната посока с 2-те полета. Програмата
извежда всеки ход на коня във вида A1, C2, ... и завършва, когато
всички полета на дъската са обходени.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkTwo( int direction, int move2, int pos1, int pos2);
int checkFour( int move1, int move2, int*pos1, int*pos2);

int main(void){

    int board[8][8]={0};    //Chessboard 8x8 filled with zeros

    int pos1=0;       //row position
    int pos2=0;       // column position

    

    int sum;
    while(sum<64){ // All positions are set to 1
        sum=0;  
        board[pos1][pos2] = 1;  //set enitial position at A1, flag with value 1

        int move1 = rand()%4;   //First move two steps in four directions
        int move2 = rand()%2;   //Second move one step in two directions

        if(checkFour( move1, move2, &pos1, &pos2)){
            printf("%c%c\n",'A'+pos1,'1'+pos2);     //print current position
        }

        for(int i=0;i<8;i++){       // calculate the sum for all positions where the house set foot
            for(int j=0;j<8;j++){
                sum+=board[i][j];
            }
        }
    }

}

int checkFour( int move1, int move2, int*pos1, int*pos2){
//Check first two moves in 4 directions not stepping out of the board
    int direction;
    switch(move1){
        case 0:             //moving North
            if(*pos1-2>-1){
                *pos1 -= 2;
                direction=0; // vertical
                *pos2 += checkTwo(direction, move2,*pos1,*pos2);
                return 1;
            }
            else return 0;
        case 1:             //moving East
            if(*pos2+2<9){
                *pos2 += 2;
                direction=1; // horizontal
                *pos1 += checkTwo(direction, move2,*pos1,*pos2);
                return 1;
            }
            else return 0;
        case 2:             //moving South
            if(*pos1+2<9){
                *pos1 += 2;
                direction=0; // vertical
                *pos2 += checkTwo(direction, move2,*pos1,*pos2);
                return 1;
            }
            else return 0;
        case 3:             //moving West
            if(*pos2-2>-1){
                *pos2 -= 2;
                direction=1; // horizontal 
                *pos1 += checkTwo(direction, move2,*pos1,*pos2);
                return 1;
            }
            else return 0;

    }
}

int checkTwo( int direction, int move2, int pos1, int pos2){
//check the second move left ot right in vertical or horizontal direction
    switch(direction){
        case 0:     
            if (move2=0 && pos2-1 >-1){    // moving left from the column on pos1
                return -1;
            }
            else if (move2=1 && pos2+1 < 8){   // moving right from the column on pos1
                return 1;
            }
            else return 0;
        case 1:
            if (move2=0 && pos1-1 >-1){    // moving up from the row on pos2
                return -1;
            }
            else if (move2=1 && pos1+1 < 8){   // moving down from the row on pos2
                return 1;
            }
            else return 0;
    }
    
}

