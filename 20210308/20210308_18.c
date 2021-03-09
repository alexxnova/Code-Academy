
/*
Направете сериализация и десериализация на структурата
typedef struct Person{
char name[20];
int age;
char gender;
}t_person;
 в XML формат по показания в лекцията начин.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// unsuccsesfull deserialization
static const char *FORMAT_PERSON_IN = "<t_person>\n\t<name>%s</name>\n\t<age>%d</age>\n\t<gender>%c</gender>\n</t_person>\n";
static const char *FORMAT_PERSON_OUT = "<t_person>\n\t<name>%s</name>\n\t<age>%d</age>\n\t<gender>%c</gender>\n</t_person>\n";

typedef struct Person{
    char name[20];
    int age;
    char gender;
}t_person;


int main(void){
    t_person me = {.name = "Alex",.age = 30,.gender = 'F'};
    t_person me2;
    FILE *fp;
    fp = fopen("person.xml", "w+" );
        if(NULL == fp)
        return 1;

    fprintf(fp, FORMAT_PERSON_OUT, me.name, me.age, me.gender);
    fseek(fp, 0, SEEK_SET);
    fscanf(fp, FORMAT_PERSON_IN, me2.name, &me2.age, &me2.gender);
    printf(FORMAT_PERSON_IN, me2.name, me2.age, me2.gender);

    return 0;
}
