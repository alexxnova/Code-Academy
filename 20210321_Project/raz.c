/*  Program RAZ.exe 
    Author: Aleksandra Ivanova
    Date:   21.03.2021
    Task:   Personal project in Code Academy C programing course 

    Description:    The RAZ.exe program takes strings as user input 
                    prints out the number of words that occure only ones and the words instances.

    Example:        User prompt
                    >> 6
                    >> nebe more voda gora more reka

                    Exit:
                    INPUT
                    N=6
                    reka
                    more
                    gora
                    voda
                    more
                    nebe

                    RESULT
                    M=1
                    reka                      

*/

#include "list_str.h"

node_t * head; 

int main( ) {

    int N = 0; // number of words to be entered
    int M = 0; // number of words in the result
    char buffer[MAX];

    printf("How many words you want to enter:");
    scanf("%d", &N);
    fflush(stdin);

    // Initialize liked list head pointer
    init();
    // Fill the list with strings from user
    for(int i=0;i<N;i++){
        printf( "Word %d: \n",i+1);
        gets(buffer);
        add(buffer); 
    }

    printf("\nINPUT\nN=%d\n",listLen(head));
    printList(head);

    // Function to remove all list instances that occure more than ones in the list
    oneInstanceElement(head);

    printf("\nRESULT\nM=%d\n",listLen(head));
    printList(head);
    
    // Free the memory of all nodes in the list
    freeList(head);
 return 0;
}

