
/*
9 10 11 12 13 14 15 16
1 2 3 4 5 6 7 8
Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROW 3
#define COL 8
#define MAX 1000    //Number of moves that can be stored in the log

typedef struct {
        int num;
        int move;
        int board[ROW][COL];
}soliter;

typedef struct {
        int undo;
        int top;
        int log[MAX][ROW][COL];
}log;

//Game functions
int makeMove(soliter * game, log * logPtr);
void printArr(soliter * game);
int sum(soliter * game);

// UNDO functions
int isempty(log * logPtr);
int isfull(log * logPtr);
void push(soliter game, log * logPtr);
void pop(soliter * game, log * logPtr);

int main(void)
{
    soliter game = {0,0,{{0,0,0,0,0,0,0,0},{9,10,11,12,13,14,15,16},{1,2,3,4,5,6,7,8}}}; //intialize board
    soliter * gamePtr = &game;

    log logGame;
    log * logPtr = &logGame;
    logPtr->top=-1;

    //Menu
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO SOLITARE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printArr(gamePtr);

    while(sum(gamePtr)>1){
        printf("ENTER A NUMBER FROM THE BOARD TO MOVE\n");
        fflush(stdin);
        scanf("%d", &game.num);
        printf("NOW MAKE A MOVE!\nPRESS -> 0 to go UP    1 to go RIGHT   2 to go DOWN    3 to go LEFT\n");
        fflush(stdin);
        scanf("%d", &game.move);

        // Copy game board to the log 
        push(game, logPtr);                  
        
        //Check and make the move
        if (makeMove( gamePtr,logPtr)){     // If the move is has been made
            printArr(gamePtr);              // Print the board
        }
        else printf("Invalid move! Step only on empty positions (-)\n");
        
        //UNDO prompt    
        printf("PRESS -> 0 to UNDO  ANY to RESUME\n");
        fflush(stdin);
        scanf("%d", &logGame.undo);
        while(!logGame.undo){               // UNDO until resume
                pop(gamePtr, logPtr);       // Asigns the last board from the log to the game board
                printArr(gamePtr);          // Prints the newly asigned game board
                printf("PRESS -> 0 to UNDO  ANY to RESUME\n"); //Ask again
                fflush(stdin);
                scanf("%d", &logGame.undo);
            }
    }   
    return 0;
}

int makeMove(soliter * game, log * logPtr){
int row, col;
// Find the number position in the array
for(int i=0; i<ROW; i++){
    for(int j=0; j<COL; j++){
        if(game->num==game->board[i][j]){
            row = i;
            col = j;
        }
    }   
}
//Check moves in the 4 directions not stepping out of the board
    switch(game->move){
        case 0:             //moving North
            if(row-2>-1 && game->board[row-2][col]==0){   // if not outside of the board AND the new position is free to step on
                if(game->board[row-1][col]==1){           // if the next position in this direction is 1, the game is lost
                    printf("Number 1 deleted!\nGAME OVER\n");
                    return 0;
                }           
                game->board[row][col]=0;                  //set the initial position to 0
                game->board[row-1][col]=0;                // set the next position in the direction to 0
                game->board[row-2][col] = game->num;      // make the jump
                return 1;
            }
            else return 0;
        case 1:             //moving East
            if(col+2<9 && game->board[row][col+2]==0){
                if(game->board[row][col+1]==1){           
                    printf("Number 1 deleted!\nGAME OVER\n");
                    return 0;
                }   
                game->board[row][col]=0;
                game->board[row][col+1]=0;
                game->board[row][col+2]= game->num;
                return 1;
            }
            else return 0;
        case 2:             //moving South
            if(row+2<3 && game->board[row+2][col]==0){
                if(game->board[row+1][col]==1){           
                    printf("Number 1 deleted!\nGAME OVER\n");
                    return 0;
                } 
                game->board[row][col]=0;
                game->board[row+1][col]=0;
                game->board[row+2][col]= game->num;
                return 1;
            }
            else return 0;
        case 3:             //moving West
            if(col-2>-1 && game->board[row][col-2]==0){
                if(game->board[row][col-1]==1){           
                    printf("Number 1 deleted!\nGAME OVER\n");
                    return 0;
                } 
                game->board[row][col]=0;
                game->board[row][col-1]=0;
                game->board[row][col-2]= game->num;
                return 1;
            }
            else return 0;
    }
}

void printArr(soliter * game){
    printf("=========================================================================\n");
    for(int i=0; i<ROW; i++){
        printf("|\t");
        for(int j=0; j<COL; j++){
            if (game->board[i][j]==0){
                printf("-\t");
            }
            else printf("%d\t", game->board[i][j]);
        }
        printf("|\n");
    }
    printf("=========================================================================\n");
}
int sum(soliter * game){
    int sum=0;
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            sum += game->board[i][j];
        }
    }    
    return sum;
}

int isempty(log * logPrt){
    if (logPrt->top == -1)
        return 1;
    else
        return 0;
}

int isfull(log * logPtr){
    if (logPtr->top == MAX)
        return 1;
    else
        return 0;
}

void push(soliter game, log * logPtr){
    if (!isfull(logPtr)){
        logPtr->top = logPtr->top + 1;
            for(int i=0;i<ROW;i++){
                for(int j=0;j<COL;j++){
                    logPtr->log[logPtr->top][i][j]=game.board[i][j];
                }
            }
        }
    else{
        printf("Reached MAX number of moves.\n");
    }
}

void pop(soliter * game, log * logPtr){
    int data[ROW][COL];
    if (!isempty(logPtr)){
        for(int i=0;i<ROW;i++){
            for(int j=0;j<COL;j++){
                game->board[i][j]=logPtr->log[logPtr->top][i][j];
                }
            }
        logPtr->top = logPtr->top - 1;
    }
    else{
        printf("Could not retrieve last board, no moves have been made.\n");
    }
}