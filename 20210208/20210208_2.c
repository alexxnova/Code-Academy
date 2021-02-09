/*
Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.
*/

#include <stdio.h>

int main(void){
    
    int row = 5;
    int col = 5;

    int arr[col][row];

    for (int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i=0; i<row; i++) {
      for(int j=0;j<col;j++) {
         printf("%d ", arr[i][j]);
         if(j==col-1){
            printf("\n");
         }
      }
   }

    return 0;
}
