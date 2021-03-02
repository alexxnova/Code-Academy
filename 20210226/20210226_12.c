
/*
Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int m_id;
    char m_fname[10];
    char m_mname[10];
    char m_lname[10];
    char m_job[20];
    int m_experience; //months
    float m_salary;
    struct employee *manager;
}employee;

int main(void){
    srand(time(0));

    int size = 2;

    employee * arrEmp = (employee*)(malloc(sizeof(employee)));;
    employee * arrMan = (employee*)(malloc(sizeof(employee)));;

    // Array of two managers
    for(int i=0; i<2; i++){    
        printf("\nEnter manager name:"); 
        scanf("%s",&arrMan[i].m_fname);
        printf("\nEnter manager last name:"); 
        scanf("%s",&arrMan[i].m_lname);
    }

    arrEmp[0].manager = &arrMan[(rand()%2)];
    printf("%s", arrEmp[0].manager->m_fname);
     

    for(int i=0; i<size; i++){    
        printf("\nEnter ID:");    
        scanf("%d",&arrEmp[i].m_id);
        printf("\nEnter fisrst name:");    
        scanf("%s",&arrEmp[i].m_fname);
        printf("\nEnter middle name:");    
        scanf("%s",&arrEmp[i].m_mname); 
        printf("\nEnter last name:");    
        scanf("%s",&arrEmp[i].m_lname); 
        printf("\nEnter position:");    
        scanf("%s",&arrEmp[i].m_job);   
        printf("\nEnter experience in (months):");    
        scanf("%s",&arrEmp[i].m_experience);  
        printf("\nEnter salary:");    
        scanf("%s",&arrEmp[i].m_salary);
        // Randomnly asigning manager from the manager array
        arrEmp[0].manager = &arrMan[(rand()%2)];   
    }

    printf("\nEmployes list\n"); 
    for(int i=0; i<size; i++){    
        printf("ID: %d \tFisrst name:%s \tMiddle name: %s \tLast name: %s \tPosition: %s \tExperience: %d months\tSalary: %d \t Manager: %s %s \n",
        arrEmp[i].m_id, arrEmp[i].m_fname, arrEmp[i].m_mname, arrEmp[i].m_lname, arrEmp[i].m_job, arrEmp[i].m_experience, arrEmp[i].m_salary, arrEmp[0].manager->m_fname, arrEmp[0].manager->m_lname);     
}    

return 0;
}
