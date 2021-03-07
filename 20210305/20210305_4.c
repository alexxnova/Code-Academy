
/*
Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода
3324312
2423243
4232421
4412234
3233422
3242321
113342F

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROW 7
#define COL 7
#define MAX 1000    //Number of moves that can be stored in the log

typedef struct {
        int steps;
        int move;
        int row;
        int col;
        int board[ROW][COL];    
}maze;

typedef struct {
        int undo;
        int top;
        int log[MAX][2];    // stores {row,col} from previous moves
}log;

// //Game functions
int makeMove(maze * game);
void printArr(maze * game);

// // UNDO functions
int isempty(log * logPtr);
int isfull(log * logPtr);
void push(maze * game, log * logPtr);
void pop(maze * game, log * logPtr);

int main(void){   
    maze * game = (maze*)(malloc(sizeof(maze)));  // alocate memory for warehouse struct
    *game = (maze){1,0,0,0,{{3,3,2,4,3,1,2},
                        {2,4,2,3,2,4,3},
                        {4,2,3,2,4,2,1},
                        {4,4,1,2,2,3,4},
                        {3,2,3,3,4,2,2},
                        {3,2,4,2,3,2,1},
                        {1,1,3,3,4,2,0}}}; //intialize board
    
    log * logGame = (log*)(malloc(sizeof(log))); 
    logGame->top=-1;
    
    //Menu
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME MAZE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printArr(game);
    
    while(game->steps){
        game->steps = game->board[game->row][game->col]; 
        printf("YOU CAN MOVE %d STEPS\n", game->steps);
        printf("PRESS -> 0 to go UP    1 to go RIGHT   2 to go DOWN    3 to go LEFT\n");
        fflush(stdin);
        scanf("%d", &game->move);

        // Copy game board to the log 
        push(game, logGame);                  
        //Check and make the move
        if (makeMove(game)){     // If the move is has been made
            printArr(game);              // Print the board
        }
        else printf("Invalid move!\n");
        //UNDO prompt    
        printf("PRESS -> 0 to UNDO  1 to RESUME\n");
        fflush(stdin);
        scanf("%d", &logGame->undo);
        while(!logGame->undo){               // UNDO until RESUME
                pop(game, logGame);       // Asigns the last board from the log to the game board
                printArr(game);          // Prints the newly asigned game board
                printf("PRESS -> 0 to UNDO  1 to RESUME\n"); //Ask again
                fflush(stdin);
                scanf("%d", &logGame->undo);
             }
      }  

    free(game);
    free(logGame);
     return 0;
}

int makeMove(maze * game){
//Check moves in the 4 directions not stepping out of the board
    switch(game->move){
        case 0:             //moving North
            if(game->row - game->steps > -1){   // if not outside of the board
                game->row -= game->steps;   
                return 1;
            }
            else return 0;
        case 1:             //moving East
            if(game->col + game->steps < 8){
                game->col += game->steps;
                return 1;
            }
            else return 0;
        case 2:             //moving South
            if(game->row + game->steps < 8){
                game->row += game->steps;
                return 1;
            }
            else return 0;
        case 3:             //moving West
            if(game->col - game->steps > -1){
                game->col -= game->steps;
                return 1;
            }
            else return 0;
    }
}

void printArr(maze * game){
    printf("===================================================================\n");
    for(int i=0; i<ROW; i++){
        printf("|\t");
        for(int j=0; j<COL; j++){
            if (game->board[i][j]==0){
                printf("F\t");
            }
            else if(i==game->row && j==game->col){
                printf("*\t");
            }
            else printf("%d\t", game->board[i][j]);
        }
        printf("|\n");
    }
    printf("====================================================================\n");
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

void push(maze * game, log * logPtr){
    if (!isfull(logPtr)){
        logPtr->top = logPtr->top + 1;
            logPtr->log[logPtr->top][0]=game->row;
            logPtr->log[logPtr->top][1]=game->col;
            }
    else{
        printf("Reached MAX number of moves.\n");
    }
}

void pop(maze * game, log * logPtr){
    int data[ROW][COL];
    if (!isempty(logPtr)){
        game->row=logPtr->log[logPtr->top][0];
        game->col=logPtr->log[logPtr->top][1];        
        logPtr->top = logPtr->top - 1;
    }
    else{
        printf("This is the start board.\n");
    }
}
