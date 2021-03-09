
/*
Пренапишете задачи 14 и 15 от лекция 22 за Потребителски
типове като пуснете двете екзета в pipe:
maraton.exe | sort.exe
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
        int num;
        int age;
        char * firstName;
        char * lastName;
}members;

char * dynamicString (char * str);

int main(void){
    int arrSize=2;

    members * list = (members*)(malloc(arrSize*sizeof(members))); // pointer to heap memory for struct array

    //Loop to fillup the list
    for(int i=0; i<arrSize;i++){
        //alocate memeory for pointer members
        
        printf("Enter your number:\n");
        fflush(stdin);
        scanf("%d", &list[i].num);

        list[i].firstName = (char*)(malloc(sizeof(char)));
        printf("Enter your first name:\n");
        list[i].firstName = dynamicString(list[i].firstName);
        
        list[i].lastName = (char*)(malloc(sizeof(char)));
        printf("Enter your last name:\n");
        list[i].lastName = dynamicString(list[i].lastName);

        printf("Enter your age:\n");
        fflush(stdin);
        scanf("%d", &list[i].age);
    }

    // Aplhabetical order
    members t;
    for(int i=0;i<arrSize;i++){
          for(int j=i+1;j<arrSize;j++){
               if(strcmp(list[i].firstName,list[j].firstName)>0 || strcmp(list[i].lastName,list[j].lastName)>0){
                    t=list[i];
                    list[i]=list[j];
                    list[j]=t;
                }
        }
    }

    //Loop to print
    printf("Number\tFirst name\tLast name\tAge\n");
    for(int i=0; i<=arrSize;i++){
        printf("%d\t%s\t\t%s\t\t%d\n", list[i].num, list[i].firstName, list[i].lastName, list[i].age);
    }
    //Loop to free alocated memory
    for(int i=0; i<=arrSize;i++){
        free(list[i].firstName);
        free(list[i].lastName);
    }
    free(list);
    return 0;
}

char * dynamicString(char * str){
    //str = (char*)(malloc(sizeof(char)));
    char c;
    int i=0;
    fflush(stdin);
    while ((c = getchar()) != '\n') {
        str = realloc(str, sizeof(char)+1);
            if (NULL == str){
                printf("Reallocation memory error!\n");
                exit(2);
            }
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    return str;
   }

